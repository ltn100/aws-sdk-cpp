﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Snapshot.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class AWS_WORKSPACES_API DescribeWorkspaceSnapshotsResult
  {
  public:
    DescribeWorkspaceSnapshotsResult();
    DescribeWorkspaceSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeWorkspaceSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the snapshots that can be used to rebuild a WorkSpace.
     * These snapshots include the root volume.</p>
     */
    inline const Aws::Vector<Snapshot>& GetRebuildSnapshots() const{ return m_rebuildSnapshots; }

    /**
     * <p>Information about the snapshots that can be used to rebuild a WorkSpace.
     * These snapshots include the root volume.</p>
     */
    inline void SetRebuildSnapshots(const Aws::Vector<Snapshot>& value) { m_rebuildSnapshots = value; }

    /**
     * <p>Information about the snapshots that can be used to rebuild a WorkSpace.
     * These snapshots include the root volume.</p>
     */
    inline void SetRebuildSnapshots(Aws::Vector<Snapshot>&& value) { m_rebuildSnapshots = std::move(value); }

    /**
     * <p>Information about the snapshots that can be used to rebuild a WorkSpace.
     * These snapshots include the root volume.</p>
     */
    inline DescribeWorkspaceSnapshotsResult& WithRebuildSnapshots(const Aws::Vector<Snapshot>& value) { SetRebuildSnapshots(value); return *this;}

    /**
     * <p>Information about the snapshots that can be used to rebuild a WorkSpace.
     * These snapshots include the root volume.</p>
     */
    inline DescribeWorkspaceSnapshotsResult& WithRebuildSnapshots(Aws::Vector<Snapshot>&& value) { SetRebuildSnapshots(std::move(value)); return *this;}

    /**
     * <p>Information about the snapshots that can be used to rebuild a WorkSpace.
     * These snapshots include the root volume.</p>
     */
    inline DescribeWorkspaceSnapshotsResult& AddRebuildSnapshots(const Snapshot& value) { m_rebuildSnapshots.push_back(value); return *this; }

    /**
     * <p>Information about the snapshots that can be used to rebuild a WorkSpace.
     * These snapshots include the root volume.</p>
     */
    inline DescribeWorkspaceSnapshotsResult& AddRebuildSnapshots(Snapshot&& value) { m_rebuildSnapshots.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the snapshots that can be used to restore a WorkSpace.
     * These snapshots include both the root volume and the user volume.</p>
     */
    inline const Aws::Vector<Snapshot>& GetRestoreSnapshots() const{ return m_restoreSnapshots; }

    /**
     * <p>Information about the snapshots that can be used to restore a WorkSpace.
     * These snapshots include both the root volume and the user volume.</p>
     */
    inline void SetRestoreSnapshots(const Aws::Vector<Snapshot>& value) { m_restoreSnapshots = value; }

    /**
     * <p>Information about the snapshots that can be used to restore a WorkSpace.
     * These snapshots include both the root volume and the user volume.</p>
     */
    inline void SetRestoreSnapshots(Aws::Vector<Snapshot>&& value) { m_restoreSnapshots = std::move(value); }

    /**
     * <p>Information about the snapshots that can be used to restore a WorkSpace.
     * These snapshots include both the root volume and the user volume.</p>
     */
    inline DescribeWorkspaceSnapshotsResult& WithRestoreSnapshots(const Aws::Vector<Snapshot>& value) { SetRestoreSnapshots(value); return *this;}

    /**
     * <p>Information about the snapshots that can be used to restore a WorkSpace.
     * These snapshots include both the root volume and the user volume.</p>
     */
    inline DescribeWorkspaceSnapshotsResult& WithRestoreSnapshots(Aws::Vector<Snapshot>&& value) { SetRestoreSnapshots(std::move(value)); return *this;}

    /**
     * <p>Information about the snapshots that can be used to restore a WorkSpace.
     * These snapshots include both the root volume and the user volume.</p>
     */
    inline DescribeWorkspaceSnapshotsResult& AddRestoreSnapshots(const Snapshot& value) { m_restoreSnapshots.push_back(value); return *this; }

    /**
     * <p>Information about the snapshots that can be used to restore a WorkSpace.
     * These snapshots include both the root volume and the user volume.</p>
     */
    inline DescribeWorkspaceSnapshotsResult& AddRestoreSnapshots(Snapshot&& value) { m_restoreSnapshots.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Snapshot> m_rebuildSnapshots;

    Aws::Vector<Snapshot> m_restoreSnapshots;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
