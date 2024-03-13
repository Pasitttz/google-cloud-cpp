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
// source: google/cloud/iap/v1/service.proto

#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/iap/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace iap_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IdentityAwareProxyAdminServiceLogging::IdentityAwareProxyAdminServiceLogging(
    std::shared_ptr<IdentityAwareProxyAdminServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::iam::v1::Policy>
IdentityAwareProxyAdminServiceLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy>
IdentityAwareProxyAdminServiceLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IdentityAwareProxyAdminServiceLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::iap::v1::IapSettings>
IdentityAwareProxyAdminServiceLogging::GetIapSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::GetIapSettingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::iap::v1::GetIapSettingsRequest const& request) {
        return child_->GetIapSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::iap::v1::IapSettings>
IdentityAwareProxyAdminServiceLogging::UpdateIapSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::UpdateIapSettingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::iap::v1::UpdateIapSettingsRequest const& request) {
        return child_->UpdateIapSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::iap::v1::ListTunnelDestGroupsResponse>
IdentityAwareProxyAdminServiceLogging::ListTunnelDestGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::ListTunnelDestGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::iap::v1::ListTunnelDestGroupsRequest const& request) {
        return child_->ListTunnelDestGroups(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceLogging::CreateTunnelDestGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request) {
        return child_->CreateTunnelDestGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceLogging::GetTunnelDestGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::GetTunnelDestGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::iap::v1::GetTunnelDestGroupRequest const& request) {
        return child_->GetTunnelDestGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status IdentityAwareProxyAdminServiceLogging::DeleteTunnelDestGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request) {
        return child_->DeleteTunnelDestGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceLogging::UpdateTunnelDestGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request) {
        return child_->UpdateTunnelDestGroup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1_internal
}  // namespace cloud
}  // namespace google
