// Copyright 2022 Google LLC
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
// source: google/cloud/retail/v2/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PREDICTION_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PREDICTION_LOGGING_DECORATOR_H

#include "google/cloud/retail/v2/internal/prediction_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PredictionServiceLogging : public PredictionServiceStub {
 public:
  ~PredictionServiceLogging() override = default;
  PredictionServiceLogging(std::shared_ptr<PredictionServiceStub> child,
                           TracingOptions tracing_options,
                           std::set<std::string> const& components);

  StatusOr<google::cloud::retail::v2::PredictResponse> Predict(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::PredictRequest const& request) override;

 private:
  std::shared_ptr<PredictionServiceStub> child_;
  TracingOptions tracing_options_;
};  // PredictionServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PREDICTION_LOGGING_DECORATOR_H
