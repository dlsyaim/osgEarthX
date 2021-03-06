/**
	@brief 接口类型枚举
	@author Hao Luo
	@date 2014/11/27
*/

#ifndef OSGEARTHX_WEB_EARTH_OBJECT_CLASS_TYPE_H
#define OSGEARTHX_WEB_EARTH_OBJECT_CLASS_TYPE_H

typedef enum EarthObjectClassType
{
	EARTH_GROUP = 2,

	IMAGE_SURFACE_LAYER,
	VECTOR_SURFACE_LAYER,
	ELEVATION_SURFACE_LAYER,
	TERMASK_SURFACE_LAYER,

	EXTERNAL_GRATICLUE,
	EXTERNAL_SKY,
	EXTERNAL_VIEWPOINT,

	ANNOTATION_TEXT_LABEL,
	ANNOTATION_MODEL,
	ANNOTATION_IMAGE_OVERLAY,
	ANNOTATION_FEATURE,
	ANNOTATION_PLACE,
	ANNOTATION_CIRCLE,
	ANNOTATION_RECTANGLE,
	ANNOTATION_ELLIPSE,

	LABEL_SET_LAYER,
	MODEL_SET_LAYER,
	OVERIMG_SET_LAYER,
	SHAPE_SET_LAYER,
	PLACE_SET_LAYER,
	VIEWPOINT_SET_LAYER

}EarthObjectClassType;

#endif