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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/Distribution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  /**
   * The returned result of the corresponding request.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2016-01-28/GetDistributionResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API GetDistribution2016_01_28Result
  {
  public:
    GetDistribution2016_01_28Result();
    GetDistribution2016_01_28Result(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetDistribution2016_01_28Result& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * The distribution's information.
     */
    inline const Distribution& GetDistribution() const{ return m_distribution; }

    /**
     * The distribution's information.
     */
    inline void SetDistribution(const Distribution& value) { m_distribution = value; }

    /**
     * The distribution's information.
     */
    inline void SetDistribution(Distribution&& value) { m_distribution = std::move(value); }

    /**
     * The distribution's information.
     */
    inline GetDistribution2016_01_28Result& WithDistribution(const Distribution& value) { SetDistribution(value); return *this;}

    /**
     * The distribution's information.
     */
    inline GetDistribution2016_01_28Result& WithDistribution(Distribution&& value) { SetDistribution(std::move(value)); return *this;}

    /**
     * The current version of the distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * The current version of the distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * The current version of the distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * The current version of the distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * The current version of the distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline GetDistribution2016_01_28Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * The current version of the distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline GetDistribution2016_01_28Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * The current version of the distribution's information. For example:
     * E2QWRUHAPOMQZL.
     */
    inline GetDistribution2016_01_28Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:
    Distribution m_distribution;
    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws