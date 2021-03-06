//
// Copyright 2020 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <GTXiLib/GTXiLib.h>
#import "GSCXReportContext.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Methods to serialize a @c GTXHierarchyResultCollection instance when exporting a report.
 */
@interface GTXHierarchyResultCollection (GSCXReport)

/**
 * Constructs an HTML representation of this instance.
 *
 * @param context The context storing external resources (such as image files) for the report.
 * @return An HTML description of all the element results in this instance.
 */
- (NSString *)htmlDescription:(GSCXReportContext *)context;

@end

NS_ASSUME_NONNULL_END
