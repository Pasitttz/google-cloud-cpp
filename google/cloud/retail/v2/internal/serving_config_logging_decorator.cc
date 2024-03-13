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
// source: google/cloud/retail/v2/serving_config_service.proto

#include "google/cloud/retail/v2/internal/serving_config_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/retail/v2/serving_config_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServingConfigServiceLogging::ServingConfigServiceLogging(
    std::shared_ptr<ServingConfigServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceLogging::CreateServingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::CreateServingConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::CreateServingConfigRequest const&
                 request) {
        return child_->CreateServingConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ServingConfigServiceLogging::DeleteServingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::DeleteServingConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::DeleteServingConfigRequest const&
                 request) {
        return child_->DeleteServingConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceLogging::UpdateServingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::UpdateServingConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::UpdateServingConfigRequest const&
                 request) {
        return child_->UpdateServingConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceLogging::GetServingConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::GetServingConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::retail::v2::GetServingConfigRequest const& request) {
        return child_->GetServingConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::ListServingConfigsResponse>
ServingConfigServiceLogging::ListServingConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::ListServingConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::retail::v2::ListServingConfigsRequest const& request) {
        return child_->ListServingConfigs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceLogging::AddControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::AddControlRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::AddControlRequest const& request) {
        return child_->AddControl(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceLogging::RemoveControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::RemoveControlRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::RemoveControlRequest const& request) {
        return child_->RemoveControl(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
