/*
 Copyright 2019 New Vector Ltd

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific languagMXWellKnowne governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "MXJSONModel.h"

NS_ASSUME_NONNULL_BEGIN

/**
 MSC1957: Integration manager discovery

 "m.integrations": {
    "managers": [
        {
            "api_url": "https://integrations.example.org",
            "ui_url": "https://integrations.example.org/ui"
        },
        {
            "api_url": "https://bots.example.org"
        }
    ]
 }
 */
@class MXWellknownIntegrationsManager;

@interface MXWellknownIntegrations : MXJSONModel

@property (nonatomic) NSArray<MXWellknownIntegrationsManager*> *managers;

@end


@interface MXWellknownIntegrationsManager : MXJSONModel

@property (nonatomic) NSString *apiUrl;
@property (nonatomic, nullable) NSString *uiUrl;

@end

NS_ASSUME_NONNULL_END
