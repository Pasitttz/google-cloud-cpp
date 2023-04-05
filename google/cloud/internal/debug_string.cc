// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/internal/debug_string.h"
#include <atomic>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

DebugFormatter::DebugFormatter(TracingOptions options,
                               absl::string_view message_name)
    : options_(std::move(options)) {
  absl::StrAppend(&str_, message_name, " {");
  ++indent_;
}

DebugFormatter& DebugFormatter::SubMessage(absl::string_view message_name) {
  absl::StrAppend(&str_, Sep(), message_name, " {");
  ++indent_;
  return *this;
}

DebugFormatter& DebugFormatter::EndMessage() {
  --indent_;
  absl::StrAppend(&str_, Sep(), "}");
  return *this;
}

DebugFormatter& DebugFormatter::Field(absl::string_view field_name,
                                      bool value) {
  absl::StrAppend(&str_, Sep(), field_name, ": ", value ? "true" : "false");
  return *this;
}

DebugFormatter& DebugFormatter::StringField(absl::string_view field_name,
                                            std::string value) {
  absl::StrAppend(&str_, Sep(), field_name, ": ", "\"",
                  DebugString(std::move(value), options_), "\"");
  return *this;
}

std::string DebugFormatter::Build() {
  EndMessage();
  return std::move(str_);
}

std::string DebugFormatter::Sep() const {
  if (options_.single_line_mode()) return " ";
  return absl::StrCat("\n", std::string(indent_ * 2, ' '));
}

std::string DebugString(std::string s, TracingOptions const& options) {
  auto const pos =
      static_cast<std::size_t>(options.truncate_string_field_longer_than());
  if (s.size() > pos) s.replace(pos, std::string::npos, "...<truncated>...");
  return s;
}

std::string RequestIdForLogging() {
  static std::atomic<std::uint64_t> generator{0};
  return std::to_string(++generator);
}

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google
