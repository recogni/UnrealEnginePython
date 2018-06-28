#pragma once
#include "UEPyModule.h"

#if WITH_EDITOR

#include "fbxsdk_wrapper.h"

struct ue_PyFbxPose
{
	PyObject_HEAD
		/* Type-specific fields go here. */
		FbxPose *fbx_pose;
};


void ue_python_init_fbx_pose(PyObject *);

PyObject *py_ue_new_fbx_pose(FbxPose *);

#endif
