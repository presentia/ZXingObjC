/*
 * Copyright 2012 ZXing authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

@class ZXDataCharacter, ZXRSSFinderPattern;

@interface ZXExpandedPair : NSObject

@property (nonatomic, retain, readonly) ZXDataCharacter *leftChar;
@property (nonatomic, retain, readonly) ZXDataCharacter *rightChar;
@property (nonatomic, retain, readonly) ZXRSSFinderPattern *finderPattern;
@property (nonatomic, assign, readonly) BOOL mayBeLast;
@property (nonatomic, assign, readonly) BOOL mustBeLast;

- (id)initWithLeftChar:(ZXDataCharacter *)leftChar rightChar:(ZXDataCharacter *)rightChar finderPattern:(ZXRSSFinderPattern *)finderPattern mayBeLast:(BOOL)mayBeLast;

@end
