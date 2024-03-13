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
// source: google/cloud/tasks/v2/cloudtasks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TASKS_V2_INTERNAL_CLOUD_TASKS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TASKS_V2_INTERNAL_CLOUD_TASKS_LOGGING_DECORATOR_H

#include "google/cloud/tasks/v2/internal/cloud_tasks_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace tasks_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudTasksLogging : public CloudTasksStub {
 public:
  ~CloudTasksLogging() override = default;
  CloudTasksLogging(std::shared_ptr<CloudTasksStub> child,
                    TracingOptions tracing_options,
                    std::set<std::string> const& components);

  StatusOr<google::cloud::tasks::v2::ListQueuesResponse> ListQueues(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::ListQueuesRequest const& request) override;

  StatusOr<google::cloud::tasks::v2::Queue> GetQueue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::GetQueueRequest const& request) override;

  StatusOr<google::cloud::tasks::v2::Queue> CreateQueue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::CreateQueueRequest const& request) override;

  StatusOr<google::cloud::tasks::v2::Queue> UpdateQueue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::UpdateQueueRequest const& request) override;

  Status DeleteQueue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::DeleteQueueRequest const& request) override;

  StatusOr<google::cloud::tasks::v2::Queue> PurgeQueue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::PurgeQueueRequest const& request) override;

  StatusOr<google::cloud::tasks::v2::Queue> PauseQueue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::PauseQueueRequest const& request) override;

  StatusOr<google::cloud::tasks::v2::Queue> ResumeQueue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::ResumeQueueRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::cloud::tasks::v2::ListTasksResponse> ListTasks(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::ListTasksRequest const& request) override;

  StatusOr<google::cloud::tasks::v2::Task> GetTask(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::GetTaskRequest const& request) override;

  StatusOr<google::cloud::tasks::v2::Task> CreateTask(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::CreateTaskRequest const& request) override;

  Status DeleteTask(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::DeleteTaskRequest const& request) override;

  StatusOr<google::cloud::tasks::v2::Task> RunTask(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tasks::v2::RunTaskRequest const& request) override;

 private:
  std::shared_ptr<CloudTasksStub> child_;
  TracingOptions tracing_options_;
};  // CloudTasksLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TASKS_V2_INTERNAL_CLOUD_TASKS_LOGGING_DECORATOR_H
