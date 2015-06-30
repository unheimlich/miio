//
//  NiftiOneImageHeader.h
//  miio
//
//  Created by Andrew on 2015-06-23.
//  Copyright (c) 2015 Jesson. All rights reserved.
//

#ifndef __miio__NiftiOneImageHeader__
#define __miio__NiftiOneImageHeader__

#include <iostream>
#include <fstream>
#include "ImageHeader.h"

namespace miio
{
    
    class NiftiOneImageHeader: public ImageHeader
    {
        
    public:
        
        NiftiOneImageHeader();
        
        void ReadHeader(std::ifstream file);
        void WriteHeader(std::ifstream file);
        
        int GetSizeOfHeader();
        char GetSliceOrdering();
        short* GetDimensions();
        float GetIntentP1();
        float GetIntentP2();
        float GetIntentP3();
        short GetIntentCode();
        short GetDataType();
        short GetBitsPerPixel();
        short GetSliceStart();
        float* GetGridSpacing();
        float GetDataLocation();
        float GetScaleSlope();
        float GetScaleIntersect();
        short GetSliceEnd();
        char GetSliceCode();
        char GetGridUnits();
        float GetMaxIntensity();
        float GetMinIntensity();
        float GetSliceDuration();
        float GetTimeAxisShift();
        char* GetDescription();
        char* GetAuxFile();
        short GetQFormCode();
        short GetSFormCode();
        float GetQuaternB();
        float GetQuaternC();
        float GetQuaternD();
        float GetQOffsetX();
        float GetQOffsetY();
        float GetQOffsetZ();
        float* GetSRowX();
        float* GetSRowY();
        float* GetSRowZ();
        char* GetIntentName();
        
        void SetSliceOrdering(char ordering);
        void SetDimensions(short dimensions[8]);
        void SetIntentP1(float p1);
        void SetIntentP2(float p2);
        void SetIntentP3(float p3);
        void SetIntentCode(short code);
        void SetDataType(short type);
        void SetBitsPerPixel(short bits);
        void SetSliceStart(short start);
        void SetGridSpacing(float spacing[8]);
        void SetDataLocation(float location);
        void SetScaleSlope(float slope);
        void SetScaleIntersect(float intersect);
        void SetSliceEnd(short end);
        void SetSliceCode(char code);
        void SetGridUnits(char units);
        void SetMaxIntensity(float intensity);
        void SetMinIntensity(float intensity);
        void SetSliceDuration(float duration);
        void SetTimeAxisShift(float shift);
        void SetDescription(char description[80]);
        void SetAuxFile(char file[24]);
        void SetQFormCode(short code);
        void SetSFormCode(short code);
        void SetQuaternB(float b);
        void SetQuaternC(float c);
        void SetQuaternD(float d);
        void SetQOffsetX(float x);
        void SetQOffsetY(float y);
        void SetQOffsetZ(float z);
        void SetSRowX(float rowX[4]);
        void SetSRowY(float rowY[4]);
        void SetSRowZ(float rowZ[4]);
        void SetIntentName(char intent[16]);
        
        
        /// DATA TYPE CODES
        /*! unsigned char. */
        static const short NIFTI_TYPE_UINT8;
        /*! signed short. */
        static const short NIFTI_TYPE_INT16;
        /*! signed int. */
        static const short NIFTI_TYPE_INT32;
        /*! 32 bit float. */
        static const short NIFTI_TYPE_FLOAT32;
        /*! 64 bit complex = 2 32 bit floats. */
        static const short NIFTI_TYPE_COMPLEX64;
        /*! 64 bit float = double. */
        static const short NIFTI_TYPE_FLOAT64;
        /*! 3 8 bit bytes. */
        static const short NIFTI_TYPE_RGB24;
        /*! signed char. */
        static const short NIFTI_TYPE_INT8;
        /*! unsigned short. */
        static const short NIFTI_TYPE_UINT16;
        /*! unsigned int. */
        static const short NIFTI_TYPE_UINT32;
        /*! signed long long. */
        static const short NIFTI_TYPE_INT64;
        /*! unsigned long long. */
        static const short NIFTI_TYPE_UINT64;
        /*! 128 bit float = long double. */
        static const short NIFTI_TYPE_FLOAT128;
        /*! 128 bit complex = 2 64 bit floats. */
        static const short NIFTI_TYPE_COMPLEX128;
        /*! 256 bit complex = 2 128 bit floats */
        static const short NIFTI_TYPE_COMPLEX256;
        /*! 4 8 bit bytes. */
        static const short NIFTI_TYPE_RGBA32;
        
    private:
        
        int   m_sizeof_hdr;     ///< Must be 348
        char  m_data_type[10];  ///< UNUSED
        char  m_db_name[18];    ///< UNUSED
        int   m_extents;        ///< UNUSED
        short m_session_error;  ///< UNUSED
        char  m_regular;        ///< UNUSED
        char  m_dim_info;       ///< MRI slice Ordering \default 0
        short m_dim[8];         ///< Dimensions \default {0,0,0,0,0,0,0,0}
        float m_intent_p1;      ///< \default 0.0
        float m_intent_p2;      ///< \default 0.0
        float m_intent_p3;      ///< \default 0.0
        short m_intent_code;    ///< \default 0
        short m_datatype;       ///< Datatype of data \default 16 "float"
        short m_bitpix;         ///< Nuber of bits per pixel \default 32
        short m_slice_start;    ///< \default 0
        float m_pixdim[8];      ///< pix/voxel spacing \default {0,0,0,0,0,0,0,0}
        float m_vox_offset;     ///< Location of first data index \default 352
        float m_scl_slope;      ///< Data scaling: slope. \default 1.0
        float m_scl_inter;      ///< Data scaling: intersect. \default 0.0
        short m_slice_end;      ///< \default 0
        char  m_slice_code;     ///< Slice timing order \default 0
        char  m_xyzt_units;     ///< \default 0 "unknown"
        float m_cal_max;        ///< Maximum display intensity \default 1.0
        float m_cal_min;        ///< Minimum display intensity \default 0.0
        float m_slice_duration; ///< \default 0.0
        float m_toffset;        ///< time axis start time \default 0.0
        int   m_glmax;          ///< UNUSED
        int   m_glmin;          ///< UNUSED
        char  m_descrip[80];    ///< description of data \default ""
        char  m_aux_file[24];   ///< aux filename \default ""
        short m_qform_code;     ///< xyz coords given by rot mat and shift
                                ///  Normal case \default 1
        short m_sform_code;     ///< xyz coords given by affine transform \default 0
        float m_quatern_b;      ///< \default = 0.0
        float m_quatern_c;      ///< \default = 0.0
        float m_quatern_d;      ///< \default = 0.0
        float m_qoffset_x;      ///< \defailt = 0.0
        float m_qoffset_y;      ///< \default = 0.0
        float m_qoffset_z;      ///< \default = 0.0
        float m_srow_x[4];      ///< \default = {1.0,0.0,0.0,0.0}
        float m_srow_y[4];      ///< \default = {0.0,1.0,0.0,0.0}
        float m_srow_z[4];      ///< \default = {0.0,0.0,1.0,0.0}
        char  m_intent_name[16];///< \default = ""
        char  m_magic[4];       ///< MUST be "n+1"

        
    protected:
        
        
        
    }; // end class NiftiOneImageHeader
    
} // end namespace miio

#endif /* defined(__miio__NiftiOneImageHeader__) */
