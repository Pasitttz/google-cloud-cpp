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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_INTERNAL_CERTIFICATE_MANAGER_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_INTERNAL_CERTIFICATE_MANAGER_LOGGING_DECORATOR_H

#include "google/cloud/certificatemanager/v1/internal/certificate_manager_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace certificatemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CertificateManagerLogging : public CertificateManagerStub {
 public:
  ~CertificateManagerLogging() override = default;
  CertificateManagerLogging(std::shared_ptr<CertificateManagerStub> child,
                            TracingOptions tracing_options,
                            std::set<std::string> const& components);

  StatusOr<google::cloud::certificatemanager::v1::ListCertificatesResponse>
  ListCertificates(
      grpc::ClientContext& context, Options const& options,
      google::cloud::certificatemanager::v1::ListCertificatesRequest const&
          request) override;

  StatusOr<google::cloud::certificatemanager::v1::Certificate> GetCertificate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::certificatemanager::v1::GetCertificateRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCertificate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::CreateCertificateRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCertificate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCertificate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
          request) override;

  StatusOr<google::cloud::certificatemanager::v1::ListCertificateMapsResponse>
  ListCertificateMaps(
      grpc::ClientContext& context, Options const& options,
      google::cloud::certificatemanager::v1::ListCertificateMapsRequest const&
          request) override;

  StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
  GetCertificateMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCertificateMap(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCertificateMap(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCertificateMap(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
          request) override;

  StatusOr<
      google::cloud::certificatemanager::v1::ListCertificateMapEntriesResponse>
  ListCertificateMapEntries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::certificatemanager::v1::
          ListCertificateMapEntriesRequest const& request) override;

  StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
  GetCertificateMapEntry(
      grpc::ClientContext& context, Options const& options,
      google::cloud::certificatemanager::v1::
          GetCertificateMapEntryRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateCertificateMapEntry(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::
          CreateCertificateMapEntryRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateCertificateMapEntry(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::
          UpdateCertificateMapEntryRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteCertificateMapEntry(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::
          DeleteCertificateMapEntryRequest const& request) override;

  StatusOr<google::cloud::certificatemanager::v1::ListDnsAuthorizationsResponse>
  ListDnsAuthorizations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest const&
          request) override;

  StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
  GetDnsAuthorization(
      grpc::ClientContext& context, Options const& options,
      google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDnsAuthorization(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::
          CreateDnsAuthorizationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDnsAuthorization(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::
          UpdateDnsAuthorizationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDnsAuthorization(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::
          DeleteDnsAuthorizationRequest const& request) override;

  StatusOr<google::cloud::certificatemanager::v1::
               ListCertificateIssuanceConfigsResponse>
  ListCertificateIssuanceConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::certificatemanager::v1::
          ListCertificateIssuanceConfigsRequest const& request) override;

  StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
  GetCertificateIssuanceConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::certificatemanager::v1::
          GetCertificateIssuanceConfigRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateCertificateIssuanceConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::
          CreateCertificateIssuanceConfigRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteCertificateIssuanceConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::certificatemanager::v1::
          DeleteCertificateIssuanceConfigRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<CertificateManagerStub> child_;
  TracingOptions tracing_options_;
};  // CertificateManagerLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_INTERNAL_CERTIFICATE_MANAGER_LOGGING_DECORATOR_H
