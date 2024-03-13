// Copyright 2024 Google LLC
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
// source: google/cloud/servicehealth/v1/event_service.proto

#include "google/cloud/servicehealth/v1/internal/service_health_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/servicehealth/v1/event_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicehealth_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceHealthLogging::ServiceHealthLogging(
    std::shared_ptr<ServiceHealthStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::servicehealth::v1::ListEventsResponse>
ServiceHealthLogging::ListEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::ListEventsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::servicehealth::v1::ListEventsRequest const& request) {
        return child_->ListEvents(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicehealth::v1::Event>
ServiceHealthLogging::GetEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::GetEventRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicehealth::v1::GetEventRequest const& request) {
        return child_->GetEvent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicehealth::v1::ListOrganizationEventsResponse>
ServiceHealthLogging::ListOrganizationEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::ListOrganizationEventsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::servicehealth::v1::ListOrganizationEventsRequest const&
              request) {
        return child_->ListOrganizationEvents(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicehealth::v1::OrganizationEvent>
ServiceHealthLogging::GetOrganizationEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::GetOrganizationEventRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::servicehealth::v1::GetOrganizationEventRequest const&
              request) {
        return child_->GetOrganizationEvent(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicehealth::v1::ListOrganizationImpactsResponse>
ServiceHealthLogging::ListOrganizationImpacts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::ListOrganizationImpactsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicehealth::v1::
                 ListOrganizationImpactsRequest const& request) {
        return child_->ListOrganizationImpacts(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicehealth::v1::OrganizationImpact>
ServiceHealthLogging::GetOrganizationImpact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicehealth::v1::GetOrganizationImpactRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::servicehealth::v1::GetOrganizationImpactRequest const&
              request) {
        return child_->GetOrganizationImpact(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicehealth_v1_internal
}  // namespace cloud
}  // namespace google
