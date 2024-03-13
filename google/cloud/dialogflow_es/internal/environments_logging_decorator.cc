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
// source: google/cloud/dialogflow/v2/environment.proto

#include "google/cloud/dialogflow_es/internal/environments_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/environment.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsLogging::EnvironmentsLogging(
    std::shared_ptr<EnvironmentsStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::dialogflow::v2::ListEnvironmentsResponse>
EnvironmentsLogging::ListEnvironments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListEnvironmentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::ListEnvironmentsRequest const&
                 request) {
        return child_->ListEnvironments(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsLogging::GetEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::GetEnvironmentRequest const& request) {
        return child_->GetEnvironment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsLogging::CreateEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CreateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::CreateEnvironmentRequest const&
                 request) {
        return child_->CreateEnvironment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsLogging::UpdateEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::UpdateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::UpdateEnvironmentRequest const&
                 request) {
        return child_->UpdateEnvironment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status EnvironmentsLogging::DeleteEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::DeleteEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::DeleteEnvironmentRequest const&
                 request) {
        return child_->DeleteEnvironment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::EnvironmentHistory>
EnvironmentsLogging::GetEnvironmentHistory(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest const&
                 request) {
        return child_->GetEnvironmentHistory(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
