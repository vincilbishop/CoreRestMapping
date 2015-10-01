//
//  CRSingluarModelView.h
//  Pods
//
//  Created by Vincil Bishop on 10/1/15.
//
//

#import <Foundation/Foundation.h>

@protocol CRRestfulObject;
@protocol CRMappableObject;

@protocol CRSingluarModelView <NSObject>

@property (nonatomic,strong) id<CRRestfulObject> modelObject;

- (void) CR_updateWithModelObject:(id<CRRestfulObject,CRMappableObject>)modelObject;

@end
