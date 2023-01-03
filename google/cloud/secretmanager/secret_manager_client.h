// Copyright 2021 Google LLC
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
// source: google/cloud/secretmanager/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_SECRET_MANAGER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_SECRET_MANAGER_CLIENT_H

#include "google/cloud/secretmanager/secret_manager_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace secretmanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Secret Manager Service
///
/// Manages secrets and operations using those secrets. Implements a REST
/// model with the following objects:
///
/// * [Secret][google.cloud.secretmanager.v1.Secret]
/// * [SecretVersion][google.cloud.secretmanager.v1.SecretVersion]
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
class SecretManagerServiceClient {
 public:
  explicit SecretManagerServiceClient(
      std::shared_ptr<SecretManagerServiceConnection> connection,
      Options opts = {});
  ~SecretManagerServiceClient();

  ///@{
  // @name Copy and move support
  SecretManagerServiceClient(SecretManagerServiceClient const&) = default;
  SecretManagerServiceClient& operator=(SecretManagerServiceClient const&) =
      default;
  SecretManagerServiceClient(SecretManagerServiceClient&&) = default;
  SecretManagerServiceClient& operator=(SecretManagerServiceClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(SecretManagerServiceClient const& a,
                         SecretManagerServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SecretManagerServiceClient const& a,
                         SecretManagerServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists [Secrets][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param parent  Required. The resource name of the project associated with
  /// the
  ///  [Secrets][google.cloud.secretmanager.v1.Secret], in the format
  ///  `projects/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::Secret,google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  /// [google.cloud.secretmanager.v1.ListSecretsRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L206}
  /// [google.cloud.secretmanager.v1.Secret]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  StreamRange<google::cloud::secretmanager::v1::Secret> ListSecrets(
      std::string const& parent, Options opts = {});

  ///
  /// Lists [Secrets][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::ListSecretsRequest,google/cloud/secretmanager/v1/service.proto#L206}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::Secret,google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  /// [google.cloud.secretmanager.v1.ListSecretsRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L206}
  /// [google.cloud.secretmanager.v1.Secret]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  StreamRange<google::cloud::secretmanager::v1::Secret> ListSecrets(
      google::cloud::secretmanager::v1::ListSecretsRequest request,
      Options opts = {});

  ///
  /// Creates a new [Secret][google.cloud.secretmanager.v1.Secret] containing no
  /// [SecretVersions][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// @param parent  Required. The resource name of the project to associate
  /// with the
  ///  [Secret][google.cloud.secretmanager.v1.Secret], in the format
  ///  `projects/*`.
  /// @param secret_id  Required. This must be unique within the project.
  ///  A secret ID is a string with a maximum length of 255 characters and can
  ///  contain uppercase and lowercase letters, numerals, and the hyphen (`-`)
  ///  and underscore (`_`) characters.
  /// @param secret  Required. A [Secret][google.cloud.secretmanager.v1.Secret]
  /// with initial field values.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::Secret,google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  /// [google.cloud.secretmanager.v1.CreateSecretRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L248}
  /// [google.cloud.secretmanager.v1.Secret]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  StatusOr<google::cloud::secretmanager::v1::Secret> CreateSecret(
      std::string const& parent, std::string const& secret_id,
      google::cloud::secretmanager::v1::Secret const& secret,
      Options opts = {});

  ///
  /// Creates a new [Secret][google.cloud.secretmanager.v1.Secret] containing no
  /// [SecretVersions][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::CreateSecretRequest,google/cloud/secretmanager/v1/service.proto#L248}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::Secret,google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  /// [google.cloud.secretmanager.v1.CreateSecretRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L248}
  /// [google.cloud.secretmanager.v1.Secret]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  StatusOr<google::cloud::secretmanager::v1::Secret> CreateSecret(
      google::cloud::secretmanager::v1::CreateSecretRequest const& request,
      Options opts = {});

  ///
  /// Creates a new [SecretVersion][google.cloud.secretmanager.v1.SecretVersion]
  /// containing secret data and attaches it to an existing
  /// [Secret][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param parent  Required. The resource name of the
  /// [Secret][google.cloud.secretmanager.v1.Secret] to associate with the
  ///  [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] in the
  ///  format `projects/*/secrets/*`.
  /// @param payload  Required. The secret payload of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.AddSecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L270}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StatusOr<google::cloud::secretmanager::v1::SecretVersion> AddSecretVersion(
      std::string const& parent,
      google::cloud::secretmanager::v1::SecretPayload const& payload,
      Options opts = {});

  ///
  /// Creates a new [SecretVersion][google.cloud.secretmanager.v1.SecretVersion]
  /// containing secret data and attaches it to an existing
  /// [Secret][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::AddSecretVersionRequest,google/cloud/secretmanager/v1/service.proto#L270}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.AddSecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L270}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StatusOr<google::cloud::secretmanager::v1::SecretVersion> AddSecretVersion(
      google::cloud::secretmanager::v1::AddSecretVersionRequest const& request,
      Options opts = {});

  ///
  /// Gets metadata for a given [Secret][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param name  Required. The resource name of the
  /// [Secret][google.cloud.secretmanager.v1.Secret], in the format
  /// `projects/*/secrets/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::Secret,google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  /// [google.cloud.secretmanager.v1.GetSecretRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L285}
  /// [google.cloud.secretmanager.v1.Secret]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  StatusOr<google::cloud::secretmanager::v1::Secret> GetSecret(
      std::string const& name, Options opts = {});

  ///
  /// Gets metadata for a given [Secret][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::GetSecretRequest,google/cloud/secretmanager/v1/service.proto#L285}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::Secret,google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  /// [google.cloud.secretmanager.v1.GetSecretRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L285}
  /// [google.cloud.secretmanager.v1.Secret]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  StatusOr<google::cloud::secretmanager::v1::Secret> GetSecret(
      google::cloud::secretmanager::v1::GetSecretRequest const& request,
      Options opts = {});

  ///
  /// Updates metadata of an existing
  /// [Secret][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param secret  Required. [Secret][google.cloud.secretmanager.v1.Secret]
  /// with updated field values.
  /// @param update_mask  Required. Specifies the fields to be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::Secret,google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  /// [google.cloud.secretmanager.v1.UpdateSecretRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L354}
  /// [google.cloud.secretmanager.v1.Secret]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  StatusOr<google::cloud::secretmanager::v1::Secret> UpdateSecret(
      google::cloud::secretmanager::v1::Secret const& secret,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates metadata of an existing
  /// [Secret][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::UpdateSecretRequest,google/cloud/secretmanager/v1/service.proto#L354}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::Secret,google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  /// [google.cloud.secretmanager.v1.UpdateSecretRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L354}
  /// [google.cloud.secretmanager.v1.Secret]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L40}
  ///
  StatusOr<google::cloud::secretmanager::v1::Secret> UpdateSecret(
      google::cloud::secretmanager::v1::UpdateSecretRequest const& request,
      Options opts = {});

  ///
  /// Deletes a [Secret][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param name  Required. The resource name of the
  /// [Secret][google.cloud.secretmanager.v1.Secret] to delete in the format
  ///  `projects/*/secrets/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.secretmanager.v1.DeleteSecretRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L390}
  ///
  Status DeleteSecret(std::string const& name, Options opts = {});

  ///
  /// Deletes a [Secret][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::DeleteSecretRequest,google/cloud/secretmanager/v1/service.proto#L390}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.secretmanager.v1.DeleteSecretRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L390}
  ///
  Status DeleteSecret(
      google::cloud::secretmanager::v1::DeleteSecretRequest const& request,
      Options opts = {});

  ///
  /// Lists [SecretVersions][google.cloud.secretmanager.v1.SecretVersion]. This
  /// call does not return secret data.
  ///
  /// @param parent  Required. The resource name of the
  /// [Secret][google.cloud.secretmanager.v1.Secret] associated with the
  ///  [SecretVersions][google.cloud.secretmanager.v1.SecretVersion] to list, in
  ///  the format `projects/*/secrets/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.ListSecretVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L296}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StreamRange<google::cloud::secretmanager::v1::SecretVersion>
  ListSecretVersions(std::string const& parent, Options opts = {});

  ///
  /// Lists [SecretVersions][google.cloud.secretmanager.v1.SecretVersion]. This
  /// call does not return secret data.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::ListSecretVersionsRequest,google/cloud/secretmanager/v1/service.proto#L296}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.ListSecretVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L296}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StreamRange<google::cloud::secretmanager::v1::SecretVersion>
  ListSecretVersions(
      google::cloud::secretmanager::v1::ListSecretVersionsRequest request,
      Options opts = {});

  ///
  /// Gets metadata for a
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// `projects/*/secrets/*/versions/latest` is an alias to the most recently
  /// created [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// @param name  Required. The resource name of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] in the format
  ///  `projects/*/secrets/*/versions/*`.
  ///  `projects/*/secrets/*/versions/latest` is an alias to the most recently
  ///  created [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.GetSecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L339}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StatusOr<google::cloud::secretmanager::v1::SecretVersion> GetSecretVersion(
      std::string const& name, Options opts = {});

  ///
  /// Gets metadata for a
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// `projects/*/secrets/*/versions/latest` is an alias to the most recently
  /// created [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::GetSecretVersionRequest,google/cloud/secretmanager/v1/service.proto#L339}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.GetSecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L339}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StatusOr<google::cloud::secretmanager::v1::SecretVersion> GetSecretVersion(
      google::cloud::secretmanager::v1::GetSecretVersionRequest const& request,
      Options opts = {});

  ///
  /// Accesses a [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  /// This call returns the secret data.
  ///
  /// `projects/*/secrets/*/versions/latest` is an alias to the most recently
  /// created [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// @param name  Required. The resource name of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] in the format
  ///  `projects/*/secrets/*/versions/*`.
  ///  `projects/*/secrets/*/versions/latest` is an alias to the most recently
  ///  created [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::AccessSecretVersionResponse,google/cloud/secretmanager/v1/service.proto#L378}
  ///
  /// [google.cloud.secretmanager.v1.AccessSecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L363}
  /// [google.cloud.secretmanager.v1.AccessSecretVersionResponse]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L378}
  ///
  StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
  AccessSecretVersion(std::string const& name, Options opts = {});

  ///
  /// Accesses a [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  /// This call returns the secret data.
  ///
  /// `projects/*/secrets/*/versions/latest` is an alias to the most recently
  /// created [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::AccessSecretVersionRequest,google/cloud/secretmanager/v1/service.proto#L363}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::AccessSecretVersionResponse,google/cloud/secretmanager/v1/service.proto#L378}
  ///
  /// [google.cloud.secretmanager.v1.AccessSecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L363}
  /// [google.cloud.secretmanager.v1.AccessSecretVersionResponse]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L378}
  ///
  StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
  AccessSecretVersion(
      google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
          request,
      Options opts = {});

  ///
  /// Disables a [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// Sets the [state][google.cloud.secretmanager.v1.SecretVersion.state] of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] to
  /// [DISABLED][google.cloud.secretmanager.v1.SecretVersion.State.DISABLED].
  ///
  /// @param name  Required. The resource name of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] to disable in
  /// the format
  ///  `projects/*/secrets/*/versions/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.DisableSecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L407}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DisableSecretVersion(std::string const& name, Options opts = {});

  ///
  /// Disables a [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// Sets the [state][google.cloud.secretmanager.v1.SecretVersion.state] of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] to
  /// [DISABLED][google.cloud.secretmanager.v1.SecretVersion.State.DISABLED].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::DisableSecretVersionRequest,google/cloud/secretmanager/v1/service.proto#L407}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.DisableSecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L407}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DisableSecretVersion(
      google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
          request,
      Options opts = {});

  ///
  /// Enables a [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// Sets the [state][google.cloud.secretmanager.v1.SecretVersion.state] of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] to
  /// [ENABLED][google.cloud.secretmanager.v1.SecretVersion.State.ENABLED].
  ///
  /// @param name  Required. The resource name of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] to enable in
  /// the format
  ///  `projects/*/secrets/*/versions/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.EnableSecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L424}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StatusOr<google::cloud::secretmanager::v1::SecretVersion> EnableSecretVersion(
      std::string const& name, Options opts = {});

  ///
  /// Enables a [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// Sets the [state][google.cloud.secretmanager.v1.SecretVersion.state] of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] to
  /// [ENABLED][google.cloud.secretmanager.v1.SecretVersion.State.ENABLED].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::EnableSecretVersionRequest,google/cloud/secretmanager/v1/service.proto#L424}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.EnableSecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L424}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StatusOr<google::cloud::secretmanager::v1::SecretVersion> EnableSecretVersion(
      google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
          request,
      Options opts = {});

  ///
  /// Destroys a [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// Sets the [state][google.cloud.secretmanager.v1.SecretVersion.state] of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] to
  /// [DESTROYED][google.cloud.secretmanager.v1.SecretVersion.State.DESTROYED]
  /// and irrevocably destroys the secret data.
  ///
  /// @param name  Required. The resource name of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] to destroy in
  /// the format
  ///  `projects/*/secrets/*/versions/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.DestroySecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L441}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DestroySecretVersion(std::string const& name, Options opts = {});

  ///
  /// Destroys a [SecretVersion][google.cloud.secretmanager.v1.SecretVersion].
  ///
  /// Sets the [state][google.cloud.secretmanager.v1.SecretVersion.state] of the
  /// [SecretVersion][google.cloud.secretmanager.v1.SecretVersion] to
  /// [DESTROYED][google.cloud.secretmanager.v1.SecretVersion.State.DESTROYED]
  /// and irrevocably destroys the secret data.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::secretmanager::v1::DestroySecretVersionRequest,google/cloud/secretmanager/v1/service.proto#L441}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::secretmanager::v1::SecretVersion,google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  /// [google.cloud.secretmanager.v1.DestroySecretVersionRequest]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/service.proto#L441}
  /// [google.cloud.secretmanager.v1.SecretVersion]:
  /// @googleapis_reference_link{google/cloud/secretmanager/v1/resources.proto#L144}
  ///
  StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DestroySecretVersion(
      google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
          request,
      Options opts = {});

  ///
  /// Sets the access control policy on the specified secret. Replaces any
  /// existing policy.
  ///
  /// Permissions on
  /// [SecretVersions][google.cloud.secretmanager.v1.SecretVersion] are enforced
  /// according to the policy set on the associated
  /// [Secret][google.cloud.secretmanager.v1.Secret].
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Gets the access control policy for a secret.
  /// Returns empty policy if the secret exists and does not have a policy set.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Returns permissions that a caller has for the specified secret.
  /// If the secret does not exist, this call returns an empty set of
  /// permissions, not a NOT_FOUND error.
  ///
  /// Note: This operation is designed to be used for building permission-aware
  /// UIs and command-line tools, not for authorization checking. This operation
  /// may "fail open" without warning.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L136}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<SecretManagerServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_SECRET_MANAGER_CLIENT_H
