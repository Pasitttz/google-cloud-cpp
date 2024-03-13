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
// source: google/cloud/discoveryengine/v1/document_service.proto

#include "google/cloud/discoveryengine/v1/internal/document_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/discoveryengine/v1/document_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentServiceLogging::DocumentServiceLogging(
    std::shared_ptr<DocumentServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceLogging::GetDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::GetDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::GetDocumentRequest const&
                 request) {
        return child_->GetDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::discoveryengine::v1::ListDocumentsResponse>
DocumentServiceLogging::ListDocuments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::ListDocumentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::ListDocumentsRequest const&
                 request) {
        return child_->ListDocuments(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceLogging::CreateDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::CreateDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::CreateDocumentRequest const&
                 request) {
        return child_->CreateDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::discoveryengine::v1::Document>
DocumentServiceLogging::UpdateDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::UpdateDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::UpdateDocumentRequest const&
                 request) {
        return child_->UpdateDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status DocumentServiceLogging::DeleteDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::DeleteDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::DeleteDocumentRequest const&
                 request) {
        return child_->DeleteDocument(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentServiceLogging::AsyncImportDocuments(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::discoveryengine::v1::ImportDocumentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::discoveryengine::v1::ImportDocumentsRequest const&
                 request) {
        return child_->AsyncImportDocuments(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentServiceLogging::AsyncPurgeDocuments(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::discoveryengine::v1::PurgeDocumentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::discoveryengine::v1::PurgeDocumentsRequest const&
                 request) {
        return child_->AsyncPurgeDocuments(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DocumentServiceLogging::AsyncGetOperation(
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

future<Status> DocumentServiceLogging::AsyncCancelOperation(
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
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
