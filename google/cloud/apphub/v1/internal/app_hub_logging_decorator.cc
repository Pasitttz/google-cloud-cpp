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
// source: google/cloud/apphub/v1/apphub_service.proto

#include "google/cloud/apphub/v1/internal/app_hub_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/apphub/v1/apphub_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace apphub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppHubLogging::AppHubLogging(std::shared_ptr<AppHubStub> child,
                             TracingOptions tracing_options,
                             std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::apphub::v1::LookupServiceProjectAttachmentResponse>
AppHubLogging::LookupServiceProjectAttachment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::LookupServiceProjectAttachmentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::
                 LookupServiceProjectAttachmentRequest const& request) {
        return child_->LookupServiceProjectAttachment(context, options,
                                                      request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apphub::v1::ListServiceProjectAttachmentsResponse>
AppHubLogging::ListServiceProjectAttachments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListServiceProjectAttachmentsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::apphub::v1::ListServiceProjectAttachmentsRequest const&
              request) {
        return child_->ListServiceProjectAttachments(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncCreateServiceProjectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::apphub::v1::
                 CreateServiceProjectAttachmentRequest const& request) {
        return child_->AsyncCreateServiceProjectAttachment(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::apphub::v1::ServiceProjectAttachment>
AppHubLogging::GetServiceProjectAttachment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetServiceProjectAttachmentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::apphub::v1::GetServiceProjectAttachmentRequest const&
              request) {
        return child_->GetServiceProjectAttachment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncDeleteServiceProjectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::apphub::v1::
                 DeleteServiceProjectAttachmentRequest const& request) {
        return child_->AsyncDeleteServiceProjectAttachment(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::apphub::v1::DetachServiceProjectAttachmentResponse>
AppHubLogging::DetachServiceProjectAttachment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::DetachServiceProjectAttachmentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::
                 DetachServiceProjectAttachmentRequest const& request) {
        return child_->DetachServiceProjectAttachment(context, options,
                                                      request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apphub::v1::ListDiscoveredServicesResponse>
AppHubLogging::ListDiscoveredServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListDiscoveredServicesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::ListDiscoveredServicesRequest const&
                 request) {
        return child_->ListDiscoveredServices(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apphub::v1::DiscoveredService>
AppHubLogging::GetDiscoveredService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetDiscoveredServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::GetDiscoveredServiceRequest const&
                 request) {
        return child_->GetDiscoveredService(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apphub::v1::LookupDiscoveredServiceResponse>
AppHubLogging::LookupDiscoveredService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::LookupDiscoveredServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::LookupDiscoveredServiceRequest const&
                 request) {
        return child_->LookupDiscoveredService(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apphub::v1::ListServicesResponse>
AppHubLogging::ListServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListServicesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::ListServicesRequest const& request) {
        return child_->ListServices(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::CreateServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::apphub::v1::CreateServiceRequest const& request) {
        return child_->AsyncCreateService(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::apphub::v1::Service> AppHubLogging::GetService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::GetServiceRequest const& request) {
        return child_->GetService(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncUpdateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::UpdateServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::apphub::v1::UpdateServiceRequest const& request) {
        return child_->AsyncUpdateService(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::DeleteServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::apphub::v1::DeleteServiceRequest const& request) {
        return child_->AsyncDeleteService(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::apphub::v1::ListDiscoveredWorkloadsResponse>
AppHubLogging::ListDiscoveredWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListDiscoveredWorkloadsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::ListDiscoveredWorkloadsRequest const&
                 request) {
        return child_->ListDiscoveredWorkloads(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apphub::v1::DiscoveredWorkload>
AppHubLogging::GetDiscoveredWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetDiscoveredWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::GetDiscoveredWorkloadRequest const&
                 request) {
        return child_->GetDiscoveredWorkload(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apphub::v1::LookupDiscoveredWorkloadResponse>
AppHubLogging::LookupDiscoveredWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::LookupDiscoveredWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::LookupDiscoveredWorkloadRequest const&
                 request) {
        return child_->LookupDiscoveredWorkload(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::apphub::v1::ListWorkloadsResponse>
AppHubLogging::ListWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListWorkloadsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::ListWorkloadsRequest const& request) {
        return child_->ListWorkloads(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncCreateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::CreateWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::apphub::v1::CreateWorkloadRequest const& request) {
        return child_->AsyncCreateWorkload(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::apphub::v1::Workload> AppHubLogging::GetWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::GetWorkloadRequest const& request) {
        return child_->GetWorkload(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncUpdateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::UpdateWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::apphub::v1::UpdateWorkloadRequest const& request) {
        return child_->AsyncUpdateWorkload(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncDeleteWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::DeleteWorkloadRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::apphub::v1::DeleteWorkloadRequest const& request) {
        return child_->AsyncDeleteWorkload(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::apphub::v1::ListApplicationsResponse>
AppHubLogging::ListApplications(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::ListApplicationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::apphub::v1::ListApplicationsRequest const& request) {
        return child_->ListApplications(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncCreateApplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::CreateApplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::apphub::v1::CreateApplicationRequest const& request) {
        return child_->AsyncCreateApplication(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::apphub::v1::Application> AppHubLogging::GetApplication(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apphub::v1::GetApplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::apphub::v1::GetApplicationRequest const& request) {
        return child_->GetApplication(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncUpdateApplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::UpdateApplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::apphub::v1::UpdateApplicationRequest const& request) {
        return child_->AsyncUpdateApplication(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncDeleteApplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::apphub::v1::DeleteApplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::apphub::v1::DeleteApplicationRequest const& request) {
        return child_->AsyncDeleteApplication(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppHubLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> AppHubLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apphub_v1_internal
}  // namespace cloud
}  // namespace google
