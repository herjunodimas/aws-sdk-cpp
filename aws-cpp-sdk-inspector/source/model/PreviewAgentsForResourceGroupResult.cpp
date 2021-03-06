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

#include <aws/inspector/model/PreviewAgentsForResourceGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PreviewAgentsForResourceGroupResult::PreviewAgentsForResourceGroupResult()
{
}

PreviewAgentsForResourceGroupResult::PreviewAgentsForResourceGroupResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PreviewAgentsForResourceGroupResult& PreviewAgentsForResourceGroupResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("agentPreviewList"))
  {
    Array<JsonValue> agentPreviewListJsonList = jsonValue.GetArray("agentPreviewList");
    for(unsigned agentPreviewListIndex = 0; agentPreviewListIndex < agentPreviewListJsonList.GetLength(); ++agentPreviewListIndex)
    {
      m_agentPreviewList.push_back(agentPreviewListJsonList[agentPreviewListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
