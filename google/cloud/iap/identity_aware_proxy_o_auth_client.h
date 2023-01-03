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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_IDENTITY_AWARE_PROXY_O_AUTH_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_IDENTITY_AWARE_PROXY_O_AUTH_CLIENT_H

#include "google/cloud/iap/identity_aware_proxy_o_auth_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace iap {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API to programmatically create, list and retrieve Identity Aware Proxy (IAP)
/// OAuth brands; and create, retrieve, delete and reset-secret of IAP OAuth
/// clients.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class IdentityAwareProxyOAuthServiceClient {
 public:
  explicit IdentityAwareProxyOAuthServiceClient(
      std::shared_ptr<IdentityAwareProxyOAuthServiceConnection> connection,
      Options opts = {});
  ~IdentityAwareProxyOAuthServiceClient();

  ///@{
  // @name Copy and move support
  IdentityAwareProxyOAuthServiceClient(
      IdentityAwareProxyOAuthServiceClient const&) = default;
  IdentityAwareProxyOAuthServiceClient& operator=(
      IdentityAwareProxyOAuthServiceClient const&) = default;
  IdentityAwareProxyOAuthServiceClient(IdentityAwareProxyOAuthServiceClient&&) =
      default;
  IdentityAwareProxyOAuthServiceClient& operator=(
      IdentityAwareProxyOAuthServiceClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(IdentityAwareProxyOAuthServiceClient const& a,
                         IdentityAwareProxyOAuthServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(IdentityAwareProxyOAuthServiceClient const& a,
                         IdentityAwareProxyOAuthServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists the existing brands for the project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::ListBrandsRequest,google/cloud/iap/v1/service.proto#L599}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::ListBrandsResponse,google/cloud/iap/v1/service.proto#L606}
  ///
  /// [google.cloud.iap.v1.ListBrandsRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L599}
  /// [google.cloud.iap.v1.ListBrandsResponse]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L606}
  ///
  StatusOr<google::cloud::iap::v1::ListBrandsResponse> ListBrands(
      google::cloud::iap::v1::ListBrandsRequest const& request,
      Options opts = {});

  ///
  /// Constructs a new OAuth brand for the project if one does not exist.
  /// The created brand is "internal only", meaning that OAuth clients created
  /// under it only accept requests from users who belong to the same Google
  /// Workspace organization as the project. The brand is created in an
  /// un-reviewed status. NOTE: The "internal only" status can be manually
  /// changed in the Google Cloud Console. Requires that a brand does not
  /// already exist for the project, and that the specified support email is
  /// owned by the caller.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::CreateBrandRequest,google/cloud/iap/v1/service.proto#L612}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::Brand,google/cloud/iap/v1/service.proto#L698}
  ///
  /// [google.cloud.iap.v1.CreateBrandRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L612}
  /// [google.cloud.iap.v1.Brand]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L698}
  ///
  StatusOr<google::cloud::iap::v1::Brand> CreateBrand(
      google::cloud::iap::v1::CreateBrandRequest const& request,
      Options opts = {});

  ///
  /// Retrieves the OAuth brand of the project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::GetBrandRequest,google/cloud/iap/v1/service.proto#L622}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::Brand,google/cloud/iap/v1/service.proto#L698}
  ///
  /// [google.cloud.iap.v1.GetBrandRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L622}
  /// [google.cloud.iap.v1.Brand]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L698}
  ///
  StatusOr<google::cloud::iap::v1::Brand> GetBrand(
      google::cloud::iap::v1::GetBrandRequest const& request,
      Options opts = {});

  ///
  /// Creates an Identity Aware Proxy (IAP) OAuth client. The client is owned
  /// by IAP. Requires that the brand for the project exists and that it is
  /// set for internal-only use.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::CreateIdentityAwareProxyClientRequest,google/cloud/iap/v1/service.proto#L660}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::IdentityAwareProxyClient,google/cloud/iap/v1/service.proto#L716}
  ///
  /// [google.cloud.iap.v1.CreateIdentityAwareProxyClientRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L660}
  /// [google.cloud.iap.v1.IdentityAwareProxyClient]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L716}
  ///
  StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
  CreateIdentityAwareProxyClient(
      google::cloud::iap::v1::CreateIdentityAwareProxyClientRequest const&
          request,
      Options opts = {});

  ///
  /// Lists the existing clients for the brand.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::ListIdentityAwareProxyClientsRequest,google/cloud/iap/v1/service.proto#L629}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::IdentityAwareProxyClient,google/cloud/iap/v1/service.proto#L716}
  ///
  /// [google.cloud.iap.v1.ListIdentityAwareProxyClientsRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L629}
  /// [google.cloud.iap.v1.IdentityAwareProxyClient]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L716}
  ///
  StreamRange<google::cloud::iap::v1::IdentityAwareProxyClient>
  ListIdentityAwareProxyClients(
      google::cloud::iap::v1::ListIdentityAwareProxyClientsRequest request,
      Options opts = {});

  ///
  /// Retrieves an Identity Aware Proxy (IAP) OAuth client.
  /// Requires that the client is owned by IAP.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::GetIdentityAwareProxyClientRequest,google/cloud/iap/v1/service.proto#L673}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::IdentityAwareProxyClient,google/cloud/iap/v1/service.proto#L716}
  ///
  /// [google.cloud.iap.v1.GetIdentityAwareProxyClientRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L673}
  /// [google.cloud.iap.v1.IdentityAwareProxyClient]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L716}
  ///
  StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
  GetIdentityAwareProxyClient(
      google::cloud::iap::v1::GetIdentityAwareProxyClientRequest const& request,
      Options opts = {});

  ///
  /// Resets an Identity Aware Proxy (IAP) OAuth client secret. Useful if the
  /// secret was compromised. Requires that the client is owned by IAP.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::ResetIdentityAwareProxyClientSecretRequest,google/cloud/iap/v1/service.proto#L681}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::IdentityAwareProxyClient,google/cloud/iap/v1/service.proto#L716}
  ///
  /// [google.cloud.iap.v1.ResetIdentityAwareProxyClientSecretRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L681}
  /// [google.cloud.iap.v1.IdentityAwareProxyClient]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L716}
  ///
  StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
  ResetIdentityAwareProxyClientSecret(
      google::cloud::iap::v1::ResetIdentityAwareProxyClientSecretRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes an Identity Aware Proxy (IAP) OAuth client. Useful for removing
  /// obsolete clients, managing the number of clients in a given project, and
  /// cleaning up after tests. Requires that the client is owned by IAP.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::DeleteIdentityAwareProxyClientRequest,google/cloud/iap/v1/service.proto#L689}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.iap.v1.DeleteIdentityAwareProxyClientRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L689}
  ///
  Status DeleteIdentityAwareProxyClient(
      google::cloud::iap::v1::DeleteIdentityAwareProxyClientRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<IdentityAwareProxyOAuthServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_IDENTITY_AWARE_PROXY_O_AUTH_CLIENT_H
