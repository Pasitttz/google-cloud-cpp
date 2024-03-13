// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/language/v2/language_service.proto

#include "google/cloud/language/v2/internal/language_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/language/v2/language_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace language_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LanguageServiceLogging::LanguageServiceLogging(
    std::shared_ptr<LanguageServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::language::v2::AnalyzeSentimentResponse>
LanguageServiceLogging::AnalyzeSentiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v2::AnalyzeSentimentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::language::v2::AnalyzeSentimentRequest const& request) {
        return child_->AnalyzeSentiment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::language::v2::AnalyzeEntitiesResponse>
LanguageServiceLogging::AnalyzeEntities(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v2::AnalyzeEntitiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::language::v2::AnalyzeEntitiesRequest const& request) {
        return child_->AnalyzeEntities(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::language::v2::ClassifyTextResponse>
LanguageServiceLogging::ClassifyText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v2::ClassifyTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::language::v2::ClassifyTextRequest const& request) {
        return child_->ClassifyText(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::language::v2::ModerateTextResponse>
LanguageServiceLogging::ModerateText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v2::ModerateTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::language::v2::ModerateTextRequest const& request) {
        return child_->ModerateText(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::language::v2::AnnotateTextResponse>
LanguageServiceLogging::AnnotateText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v2::AnnotateTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::language::v2::AnnotateTextRequest const& request) {
        return child_->AnnotateText(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v2_internal
}  // namespace cloud
}  // namespace google
