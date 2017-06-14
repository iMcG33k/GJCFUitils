//
//  GJCFQuickUIMacrocDefine.h
//  GJCommonFoundation
//
//  Created by ZYVincent on 14-10-22.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

/**
 *  UI相关的快速访问工具宏
 */

#import "SWQuickUIUitil.h"

/**
 *  将0-360的角度转换为圆角度表示
 *
 *  @param degree
 *
 *  @return 真实的角度表示
 */
#define SWDegreeToRadius(degree) (degree * M_PI / 180)

/**
 *  获取角度对应的NSNumber对象
 */
#define SWDegreeToRadiusValue(degree) @(SWDegreeToRadius(degree))

/**
 *  快速得到RGB颜色
 */
#define SWQuickRGBColor(redValue,greenValue,blueValue) [SWQuickUIUitil colorFromRed:redValue green:greenValue blue:blueValue]

/**
 *  获取带alpha值的RGB颜色
 */
#define SWQuickRGBColorAlpha(redValue,greenValue,blueValue,alpha) [SWQuickUIUitil colorFromRed:redValue green:greenValue blue:blueValue withAlpha:alpha]

/**
 *  从16进制字符中得到颜色
 */
#define SWQuickHexColor(hexString) [SWQuickUIUitil colorFromHexString:hexString]

/**
 *  从一个View获取翻转的文本绘制的图形上下文CGContextRef
 */
#define SWContextRefTextMatrixFromView(aView) [SWQuickUIUitil getTextCTMContextRefFromView:aView]

/**
 *  快速获取图片
 */
#define SWQuickImage(imageName) [SWQuickUIUitil imageWithName:imageName]

/**
 *  修正图片方向
 *
 */
#define SWFixOretationImage(aImage) [SWQuickUIUitil fixOretationImage:aImage]

/**
 *  创建圆角图片
 */
#define SWRoundCornerImage(aImage,cornerSize,boardSize) [SWQuickUIUitil createRoundCornerImage:aImage withCornerSize:cornerSize withBoardSize:boardSize]

/**
 *  组合图片
 */
#define SWQuickCombineImage(backgroundImage,maskImage) [SWQuickUIUitil combineImage:backgroundImage withMaskImage:maskImage]

/**
 *  返回圆形图片,默认用白色作为遮挡颜色
 */
#define SWCycleImage(aImage) [SWQuickUIUitil roundImage:aImage]

/**
 *  截取Rect部分的图片
 */
#define SWPartImage(aImage,rect) [SWQuickUIUitil partImage:aImage withRect:rect]

/**
 *  返回纠正方向后得图片
 */
#define SWCorrectOrientationImage(aImage) [SWQuickUIUitil correctImageOrientation:aImage]

/**
 *  返回一个纠正了方向并且进行了scale倍数缩放的图片
 */
#define SWCorrectOrientationImageWithScale(aImage,scale) [SWQuickUIUitil correctImageOrientation:aImage withScaleSize:scale]

/**
 *  返回ALAsset纠正方向后并且进行了scale倍数缩放的fullResolutionImage图片
 */
#define SWCorrectOrientationALAssetFullResolutionImageWithScale(aALAsset,scale) [SWQuickUIUitil  correctFullSolutionImageFromALAsset:aALAsset withScaleSize:scale]

/**
 *  返回ALAsset纠正方向后的fullResolutionImage图片
 */
#define SWCorrectOrientationALAssetFullResolutionImage(aALAsset) [SWQuickUIUitil correctFullSolutionImageFromALAsset:aALAsset]

/**
 *  获取一个View的截图
 */
#define SWScreenShotFromView(aView) [SWQuickUIUitil viewScreenShot:aView]

/**
 *  获取一个Layer的截图
 */
#define SWScreenShotFromLayer(aLayer) [SWQuickUIUitil layerScreenShot:aLayer]

/**
 *  按照aColor颜色创建一张size大小的图片
 *
 */
#define SWQuickImageByColorWithSize(aColor,size) [SWQuickUIUitil imageForColor:aColor withSize:size]

/**
 *  创建一个线性渐变图片
 *
 *  @param colors    按顺序渐变颜色数组
 *  @param size      需要创建的图片的大小
 *
 *  最大只支持三种颜色，起始位置颜色，中间颜色，结束颜色
 *  依次位置为 0,0.5,1.0
 *  超过3种颜色也只取前三种颜色为渐变色
 *
 *  @return 返回渐变颜色图片
 */
#define SWLinearGradientImageByColorsWithSize(colors,size) [SWQuickUIUitil gradientLinearImageFromColors:colors withImageSize:size]

/**
 *  创建线性渐变图片
 *
 *  @param fromColor 起始发颜色
 *  @param toColor   中间颜色
 *  @param size      图片大小
 *
 *  @return 渐变图片
 */
#define SWLinearGradientImageFromColorToColor(fromColor,toColor,size) [SWQuickUIUitil gradientLinearImageFromColor:fromColor withToColor:toColor withImageSize:size]

/**
 *  创建球形渐变图片
 *
 *  @param fromColor 中心颜色
 *  @param toColor   外层颜色
 *  @param size      图片大小
 *
 *  @return 渐变图片
 */
#define SWRadialGradientImageFromColorToColor(fromColor,toColor,size) [SWQuickUIUitil gradientRadialImageFromColor:fromColor withToColor:toColor withImageSize:size]

/**
 *  创建球形渐变图片
 *
 *  @param colors 颜色值数组
 *  @param size 图片大小
 *
 *  @return 渐变图片
 */
#define SWRadialGradientImageByColorsWithSize(colors,size) [SWQuickUIUitil gradientRadialImageFromColors:colors withImageSize:size]

/**
 *  创建网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define SWGridImageByLineGapAndColorWithSize(lineGap,color,size) [SWQuickUIUitil gridImageByHoriLineGap:lineGap withVerticalLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  创建水平网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define SWGridImageHorizByLineGapAndColorWithSize(lineGap,color,size) [SWQuickUIUitil gridImageHorizonByLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  创建垂直网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define SWGridImageVerticalByLineGapAndColorWithSize(lineGap,color,size) [SWQuickUIUitil gridImageVerticalByLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  快速从文件夹读取图片
 */
#define SWQuickImageByFilePath(filePath) [SWQuickUIUitil imageWithFilePath:filePath]

/**
 *  快速从归档路径读取图片
 */
#define SWQuickUnArchievedImage(filePath) [SWQuickUIUitil imageUnArchievedFromFilePath:filePath]

/**
 *  获取拉伸的图片
 *
 *  @param image      原图片
 *  @param leftOffset 左边起始位置
 *  @param topOffset  顶部起始位置
 *
 *  @return 返回拉伸后的图片
 */
#define SWImageStrecth(image,leftOffset,topOffset) [SWQuickUIUitil stretchImage:image withTopOffset:topOffset withLeftOffset:leftOffset]

/**
 *  获取重设大小拉伸后的图片
 *
 *  @param image  原图片
 *  @param top    顶部起始位置
 *  @param bottom 底部起始位置
 *  @param left   左边起始位置
 *  @param right  右边起始位置
 *
 *  @return 重设大小拉伸后后的图片
 */
#define SWImageResize(image,top,bottom,left,right) [SWQuickUIUitil resizeImage:image withEdgeTop:top withEdgeBottom:bottom withEdgeLeft:left withEdgeRight:right]

/**
 *  以duration持续时间执行一个UIView动画block
 */
#define SWAnimationWithDuration(duration,block) [SWQuickUIUitil animationDuration:duration action:block]

/**
 *  延迟second秒，以duration持续时间执行一个UIView动画block
 */
#define SWAnimationDelayWithDuration(second,duration,block) [SWQuickUIUitil animationDelay:second animationDuration:duration action:block]

/**
 *  默认隐藏显示视图动画
 */
#define SWAnimationHiddenShowView(view) [SWQuickUIUitil defaultHiddenShowView:view]

/**
 *  指定duration时长隐藏显示动画
 */
#define SWAnimationHiddenShowViewDuration(view,duration) [SWQuickUIUitil hiddenShowView:view withDuration:duration]

/**
 *  默认显示隐藏视图动画
 */
#define SWAnimationShowHiddenView(view) [SWQuickUIUitil defaultShowHiddenView:view]

/**
 *  指定duration时长显示隐藏动画
 */
#define SWAnimationShowHiddenViewDuration(view,duration) [SWQuickUIUitil showHiddenView:view withDuration:duration]

/**
 *  默认隐藏视图动画
 */
#define SWAnimationHiddenView(view) [SWQuickUIUitil defaultHiddenView:view]

/**
 *  指定duration时长隐藏动画
 */
#define SWAnimationHiddenViewDuration(view,duration) [SWQuickUIUitil hiddenView:view withDuration:duration]

/**
 *  默认显示视图动画
 */
#define SWAnimationShowView(view) [SWQuickUIUitil defaultShowView:view]

/**
 *  指定duration时长显示视图动画
 */
#define SWAnimationShowViewDuration(view,duration) [SWQuickUIUitil showView:view withDuration:duration]

/**
 *  指定duration时间长度，从当前视图alpha到目标alpha
 */
#define SWAnimationShowAlphaViewDuration(view,alpha,duration) [SWQuickUIUitil showView:view finalAlpha:alpha withDuration:duration]

/**
 *  移动当前视图到指定rect的动画,不支持便捷写法的CGRect  CGRect{20,20,20,20} 这种写法是不支持的需要使用CGRectMake
 */
#define SWAnimationMoveViewRect(view,rect,duration) [SWQuickUIUitil moveView:view newRect:rect withDuration:duration]

/**
 *  x轴增量移动动画
 */
#define SWAnimationMoveViewX(view,xDetal,duration) [SWQuickUIUitil moveViewX:view originXDetal:xDetal withDuration:duration]

/**
 *  y轴增量移动动画
 */
#define SWAnimationMoveViewY(view,yDetal,duration) [SWQuickUIUitil moveViewY:view originYDetal:yDetal withDuration:duration]

/**
 *  width增量变化动画
 */
#define SWAnimationMoveViewWidth(view,detal,duration) [SWQuickUIUitil moveViewWidth:view widthDetal:detal withDuration:duration]

/**
 *  height增量变化动画
 */
#define SWAnimationMoveViewHeight(view,detal,duration) [SWQuickUIUitil moveViewHeight:view heightDetal:detal withDuration:duration]

/**
 *  移动到指定x轴点动画
 */
#define SWAnimationMoveViewToX(view,toX,duration) [SWQuickUIUitil moveViewToX:view toOriginX:toX withDuration:duration]

/**
 *  移动到指定y轴点动画
 */
#define SWAnimationMoveViewToY(view,toY,duration) [SWQuickUIUitil moveViewToY:view toOriginY:toY withDuration:duration]

/**
 *  指定视图width到目标宽度的动画
 */
#define SWAnimationMoveViewToWidth(view,width,duration) [SWQuickUIUitil moveViewToWidth:view toWidth:width withDuration:duration]

/**
 *  指定视图height到目标高度的动画
 */
#define SWAnimationMoveViewToHeight(view,height,duration) [SWQuickUIUitil moveViewToHeight:view toHeight:height withDuration:duration]

/**
 *  移动视图中心动画 不支持便捷写法的CGPoint  (CGPoint){20,20} 这种写法是不支持的需要使用CGPointMake
 */
#define SWAnimationMoveViewCenter(view,center,duration) [SWQuickUIUitil moveViewCenter:view newCenter:center withDuration:duration]

/**
 *  缩放视图大小动画,不支持便捷写法的CGSize  (CGSize){20,20} 这种写法是不支持的,需要使用CGSizeMake
 */
#define SWAnimationMoveViewSize(view,size,duration) [SWQuickUIUitil moveViewSize:view newSize:size withDuration:duration]

/**
 *  从左开始翻转视图动画
 */
#define SWAnimationLeftFlipView(view,duration,block,completion) [SWQuickUIUitil flipViewFromLeft:view withDuration:duration action:block completionBlock:completion]

/**
 *  从右开始翻转视图动画
 */
#define SWAnimationRightFlipView(view,duration,block,completion) [SWQuickUIUitil flipViewFromRight:view withDuration:duration action:block completionBlock:completion]

/**
 *  从顶部开始翻转视图动画
 */
#define SWAnimationTopFlipView(view,duration,block,completion) [SWQuickUIUitil flipViewFromTop:view withDuration:duration action:block completionBlock:completion]

/**
 *  从底部开始翻转视图动画
 */
#define SWAnimationBottomFlipView(view,duration,block,completion) [SWQuickUIUitil flipViewFromBottom:view withDuration:duration action:block completionBlock:completion]

/**
 *  向上翻页动画
 */
#define SWAnimationPageUpView(view,duration,block,completion) [SWQuickUIUitil pageUpViewFromBottom:view withDuration:duration action:block completionBlock:completion]

/**
 *  向下翻页动画
 */
#define SWAnimationPageDownView(view,duration,block,completion) [SWQuickUIUitil pageDownViewFromTop:view withDuration:duration action:block completionBlock:completion]

/**
 *  立体翻转动画
 */
#define SWAnimationCubeView(view,duration,block,completion) [SWQuickUIUitil cubeView:view withDuration:duration  action:block completionBlock:completion]

/**
 *  绕X轴倾斜视图degree角度  degree范围:0-360
 */
#define SWAnimationViewRotateX(view,degree,duration) [SWQuickUIUitil rotationViewX:view withDegree:degree withDuration:duration]

/**
 *  绕Y轴倾斜视图degree角度  degree范围:0-360
 */
#define SWAnimationViewRotateY(view,degree,duration) [SWQuickUIUitil rotationViewY:view withDegree:degree withDuration:duration]

/**
 *  绕Z轴倾斜视图degree角度  degree范围:0-360
 */
#define SWAnimationViewRotateZ(view,degree,duration) [SWQuickUIUitil rotationViewZ:view withDegree:degree withDuration:duration]

/**
 *  translationX动画
 */
#define SWAnimationViewTranslationX(view,originX,duration) [SWQuickUIUitil translationViewX:view withOriginX:originX withDuration:duration]

/**
 *  translationY动画
 */
#define SWAnimationViewTranslationY(view,originY,duration) [SWQuickUIUitil translationViewY:view withOriginY:originY withDuration:duration]

/**
 *  translationZ动画
 */
#define SWAnimationViewTranslationZ(view,originZ,duration) [SWQuickUIUitil translationViewZ:view withOriginZ:originZ withDuration:duration]

/**
 *  scaleX动画
 */
#define SWAnimationViewScaleX(view,size,duration) [SWQuickUIUitil scaleViewX:view withScaleSize:size withDuration:duration]

/**
 *  scaleY动画
 */
#define SWAnimationViewScaleY(view,size,duration) [SWQuickUIUitil scaleViewY:view withScaleSize:size withDuration:duration]

/**
 *  scaleZ动画
 */
#define SWAnimationViewScaleZ(view,size,duration) [SWQuickUIUitil scaleViewZ:view withScaleSize:size withDuration:duration]

/**
 *  将视图绕X轴倾斜degree角度，degree范围 -360到360
 */
#define SWView3DRotateX(view,degree) [SWQuickUIUitil view3DRotateX:view withDegree:degree]

/**
 *  将视图绕Y轴倾斜degree角度，degree范围 -360到360
 */
#define SWView3DRotateY(view,degree) [SWQuickUIUitil view3DRotateY:view withDegree:degree]

/**
 *  将视图绕Z轴倾斜degree角度，degree范围 -360到360
 */
#define SWView3DRotateZ(view,degree) [SWQuickUIUitil view3DRotateZ:view withDegree:degree]

/**
 *  X轴变换
 */
#define SWView3DTranslateX(view,value) [SWQuickUIUitil view3DTranslateX:view withValue:value]

/**
 *  Y轴变换
 */
#define SWView3DTranslateY(view,value) [SWQuickUIUitil view3DTranslateY:view withValue:value]

/**
 *  Z轴变换
 */
#define SWView3DTranslateZ(view,value) [SWQuickUIUitil view3DTranslateZ:view withValue:value]

/**
 *  X轴方向缩放,代表一个缩放比例，一般都是 0 --- 1 之间的数字
 */
#define SWView3DScaleX(view,value) [SWQuickUIUitil view3DScaleX:view withValue:value]

/**
 *  Y轴方向缩放,代表一个缩放比例，一般都是 0 --- 1 之间的数字
 */
#define SWView3DScaleY(view,value) [SWQuickUIUitil view3DScaleY:view withValue:value]

/**
 *  Z轴方向缩放,整体比例变换时，也就是m11（sx）== m22（sy）时，若m33（sz）>1，图形整体缩小，若0<1，
 *  图形整体放大，若m33（sz）<0，发生关于原点的对称等比变换
 */
#define SWView3DScaleZ(view,value) [SWQuickUIUitil view3DScaleZ:view withValue:value]

/**
 *  重复某个block
 */
#define SWRepeatAction(repeatBlock) [SWQuickUIUitil repeatDoAction:repeatBlock]

/**
 *  延迟second秒开始重复某个动作
 */
#define SWRepeatActionDelay(second,repeatBlock) [SWQuickUIUitil repeatDoAction:repeatBlock withDelay:second]

/**
 *  重复某个动作duration时长
 */
#define SWRepeatActionDuration(duration,repeatBlock) [SWQuickUIUitil repeatDoAction:repeatBlock withRepeatDuration:duration]

/**
 *  延迟某个动作second秒，并且只执行duration时长
 */
#define SWRepeatActionDelayDuration(second,duration,repeatBlock) [SWQuickUIUitil repeatDoAction:repeatBlock withDelay:second withRepeatDuration:duration]

/**
 *  根据blockIdentifier停止某个block重复动作
 */
#define SWStopRepeatAction(blockIdentifier) [SWQuickUIUitil stopRepeatAction:blockIdentifier]

/**
 *  X轴上以moveXDetal偏移量一个来回,moveXDetal > 0
 */
#define SWAnimationViewXCycle(view,moveXDetal,duration) [SWQuickUIUitil animationViewXCycle:view withXMoveDetal:moveXDetal withDuration:duration]

/**
 *  Y轴上以moveYDetal偏移量一个来回,moveYDetal > 0
 */
#define SWAnimationViewYCycle(view,moveYDetal,duration) [SWQuickUIUitil animationViewYCycle:view withYMoveDetal:moveYDetal withDuration:duration]

/**
 *  Z轴上以moveZDetal偏移量一个来回,moveZDetal > 0
 */
#define SWAnimationViewZCycle(view,moveZDetal,duration) [SWQuickUIUitil animationViewZCycle:view withZMoveDetal:moveZDetal withDuration:duration]

/**
 *  绕X轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define SWAnimationViewRotateXCycle(view,degree,duration) [SWQuickUIUitil animationViewRotateXCycle:view withXRotateDetal:degree withDuration:duration]

/**
 *  绕Y轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define SWAnimationViewRotateYCycle(view,degree,duration) [SWQuickUIUitil animationViewRotateYCycle:view withYRotateDetal:degree withDuration:duration]

/**
 *  绕Z轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define SWAnimationViewRotateZCycle(view,degree,duration) [SWQuickUIUitil animationViewRotateZCycle:view withZRotateDetal:degree withDuration:duration]

/**
 *  fromValue到toValue的position移动CAAnimation
 *  animationKey 为 @"SW_animation_position"
 *
 */
#define SWCAAnimationPosition(aLayer,fromValue,toValue,repeatCount,duration) [SWQuickUIUitil animationLayer:aLayer positionCenterWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount  withDuration:duration]

/**
 *  fromValue到toValue的position.x移动CAAnimation
 *  animationKey 为 @"SW_animation_position.x"
 */
#define SWCAAnimationPositionX(aLayer,fromValue,toValue,repeatCount,duration) [SWQuickUIUitil animationLayer:aLayer positionXWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount withDuration:duration]

/**
 *  fromValue到toValue的position.y移动CAAnimation
 *  animationKey 为 @"SW_animation_position.y"
 */
#define SWCAAnimationPositionY(aLayer,fromValue,toValue,repeatCount,duration) [SWQuickUIUitil animationLayer:aLayer positionYWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照value移动postion的CAAnimation
 *  animationKey 为 @"SW_animation_by_position"
 */
#define SWCAAnimationPositionByValue(aLayer,value,repeatCount,duration) [SWQuickUIUitil animationLayer:aLayer positionCenterByValue:value  withRepeatCount:repeatCount  withDuration:duration]

/**
 *  按照value移动postion.x的CAAnimation
 *  animationKey 为 @"SW_animation_by_position.x"
 */
#define SWCAAnimationPositionXByValue(aLayer,value,repeatCount,duration) [SWQuickUIUitil animationLayer:aLayer positionXByValue:value withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照value移动postion.y的CAAnimation
 *  animationKey 为 @"SW_animation_by_position.y"
 */
#define SWCAAnimationPositionYByValue(aLayer,value,repeatCount,duration) [SWQuickUIUitil animationLayer:aLayer positionYByValue:value withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照指定路径做动画
 */
#define SWAnimationPathByValue(aLayer,aPath,value,repeatCount,duration) [SWQuickUIUitil animationLayer:aLayer path:aPath ByValue:value  withRepeatCount:repeatCount  withDuration:duration]




