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
// source: google/cloud/vpcaccess/v1/vpc_access.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_INTERNAL_VPC_ACCESS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_INTERNAL_VPC_ACCESS_LOGGING_DECORATOR_H

#include "google/cloud/vpcaccess/v1/internal/vpc_access_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace vpcaccess_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VpcAccessServiceLogging : public VpcAccessServiceStub {
 public:
  ~VpcAccessServiceLogging() override = default;
  VpcAccessServiceLogging(std::shared_ptr<VpcAccessServiceStub> child,
                          TracingOptions tracing_options,
                          std::set<std::string> const& components);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateConnector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vpcaccess::v1::CreateConnectorRequest const& request)
      override;

  StatusOr<google::cloud::vpcaccess::v1::Connector> GetConnector(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vpcaccess::v1::GetConnectorRequest const& request)
      override;

  StatusOr<google::cloud::vpcaccess::v1::ListConnectorsResponse> ListConnectors(
      grpc::ClientContext& context, Options const& options,
      google::cloud::vpcaccess::v1::ListConnectorsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteConnector(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request)
      override;

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
  std::shared_ptr<VpcAccessServiceStub> child_;
  TracingOptions tracing_options_;
};  // VpcAccessServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vpcaccess_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_INTERNAL_VPC_ACCESS_LOGGING_DECORATOR_H
