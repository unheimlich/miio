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
        
        ///
        /// \brief Default Constructor
        ///
        NiftiOneImageHeader();
        
        ///
        /// \brief Destructor
        ///
        ~NiftiOneImageHeader();
        
        ///
        /// \brief Read header from file stream
        ///
        void Read(std::ifstream &file);
    
        ///
        /// \brief Write header to file stream
        ///
        void Write(std::ifstream &file);
        
        ///
        /// \brief Copy information from reference header into this header
        ///
        void CopyMetadata(const NiftiOneImageHeader &refHeader);
        
        ///
        /// \brief Print header information
        ///
        void Print();
        
        //int GetSizeOfHeader();
        char GetSliceOrdering();
        short *GetDimensions();
        float GetIntentP1();
        float GetIntentP2();
        float GetIntentP3();
        short GetIntentCode();
        short GetDataType();
        short GetBitsPerPixel();
        short GetSliceStart();
        float *GetGridSpacing();
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
        char *GetDescription();
        char *GetAuxFile();
        short GetQFormCode();
        short GetSFormCode();
        //float GetQuaternB();
        //float GetQuaternC();
        //float GetQuaternD();
        //float GetQOffsetX();
        //float GetQOffsetY();
        //float GetQOffsetZ();
        float *GetQParams();
        //float* GetSRowX();
        //float* GetSRowY();
        //float* GetSRowZ();
        float **GetSParams();
        char *GetIntentName();
        
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
        //void SetQuaternB(float b);
        //void SetQuaternC(float c);
        //void SetQuaternD(float d);
        //void SetQOffsetX(float x);
        //void SetQOffsetY(float y);
        //void SetQOffsetZ(float z);
        void SetQParams(float qParams[6]);
        void SetSParams(float sParams[3][4]);
        //void SetSRowX(float rowX[4]);
        //void SetSRowY(float rowY[4]);
        //void SetSRowZ(float rowZ[4]);
        void SetIntentName(char intent[16]);
        
        ///
        ///  NIFTI1_DATATYPES
        ///
        
        static const short DT_UINT8;        /* unsigned char (8 bits/voxel) */
        static const short DT_INT16;        /* signed short (16 bits/voxel) */
        static const short DT_INT32;        /* signed int (32 bits/voxel)   */
        static const short DT_FLOAT32;      /* float (32 bits/voxel)        */
        static const short DT_COMPLEX64;    /* complex (64 bits/voxel)      */
        static const short DT_FLOAT64;      /* double (64 bits/voxel)       */
        static const short DT_RGB24;        /* RGB triple (24 bits/voxel)   */
        static const short DT_INT8;         /* signed char (8 bits)         */
        static const short DT_UINT16;       /* unsigned short (16 bits)     */
        static const short DT_UINT32;       /* unsigned int (32 bits)       */
        static const short DT_INT64;        /* long long (64 bits)          */
        static const short DT_UINT64;       /* unsigned long long (64 bits) */
        static const short DT_FLOAT128;     /* long double (128 bits)       */
        static const short DT_COMPLEX128;   /* double pair (128 bits)       */
        static const short DT_COMPLEX256;   /* long double pair (256 bits)  */
        static const short DT_RGBA32;       /* 4 byte RGBA (32 bits/voxel)  */
        
        
        ///
        /// NIFTI1_DATATYPE_ALIASES
        ///
        
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
        
        ///
        /// NIFTI1_INTENT_CODES
        ///
        
        /*! default: no intention is indicated in the header. */
        static const short NIFTI_INTENT_NONE;
        
        /*! [C2, chap 32] Correlation coefficient R (1 param):
         p1 = degrees of freedom
         R/sqrt(1-R*R) is t-distributed with p1 DOF. */
        static const short NIFTI_INTENT_CORREL;
        
        /*! [C2, chap 28] Student t statistic (1 param): p1 = DOF. */
        static const short NIFTI_INTENT_TTEST;
        
        /*! [C2, chap 27] Fisher F statistic (2 params):
         p1 = numerator DOF, p2 = denominator DOF. */
        static const short NIFTI_INTENT_FTEST;
        
        /*! [C1, chap 13] Standard normal (0 params): Density = N(0,1). */
        static const short NIFTI_INTENT_ZSCORE;
        
        /*! [C1, chap 18] Chi-squared (1 param): p1 = DOF.
         Density(x) proportional to exp(-x/2) * x^(p1/2-1). */
        static const short NIFTI_INTENT_CHISQ;
        
        /*! [C2, chap 25] Beta distribution (2 params): p1=a, p2=b.
         Density(x) proportional to x^(a-1) * (1-x)^(b-1). */
        static const short NIFTI_INTENT_BETA;
        
        /*! [U, chap 3] Binomial distribution (2 params):
         p1 = number of trials, p2 = probability per trial.
         Prob(x) = (p1 choose x) * p2^x * (1-p2)^(p1-x), for x=0,1,...,p1. */
        static const short NIFTI_INTENT_BINOM;
        
        /*! [C1, chap 17] Gamma distribution (2 params):
         p1 = shape, p2 = scale.
         Density(x) proportional to x^(p1-1) * exp(-p2*x). */
        static const short NIFTI_INTENT_GAMMA;
        
        /*! [U, chap 4] Poisson distribution (1 param): p1 = mean.
         Prob(x) = exp(-p1) * p1^x / x! , for x=0,1,2,.... */
        static const short NIFTI_INTENT_POISSON;
        
        /*! [C1, chap 13] Normal distribution (2 params):
         p1 = mean, p2 = standard deviation. */
        static const short NIFTI_INTENT_NORMAL;
        
        /*! [C2, chap 30] Noncentral F statistic (3 params):
         p1 = numerator DOF, p2 = denominator DOF,
         p3 = numerator noncentrality parameter.  */
        static const short NIFTI_INTENT_FTEST_NONC;
        
        /*! [C2, chap 29] Noncentral chi-squared statistic (2 params):
         p1 = DOF, p2 = noncentrality parameter.     */
        static const short NIFTI_INTENT_CHISQ_NONC;
        
        /*! [C2, chap 23] Logistic distribution (2 params):
         p1 = location, p2 = scale.
         Density(x) proportional to sech^2((x-p1)/(2*p2)). */
        static const short NIFTI_INTENT_LOGISTIC;
        
        /*! [C2, chap 24] Laplace distribution (2 params):
         p1 = location, p2 = scale.
         Density(x) proportional to exp(-abs(x-p1)/p2). */
        static const short NIFTI_INTENT_LAPLACE;
        
        /*! [C2, chap 26] Uniform distribution: p1 = lower end, p2 = upper end. */
        static const short NIFTI_INTENT_UNIFORM;
        
        /*! [C2, chap 31] Noncentral t statistic (2 params):
         p1 = DOF, p2 = noncentrality parameter. */
        static const short NIFTI_INTENT_TTEST_NONC;
        
        /*! [C1, chap 21] Weibull distribution (3 params):
         p1 = location, p2 = scale, p3 = power.
         Density(x) proportional to
         ((x-p1)/p2)^(p3-1) * exp(-((x-p1)/p2)^p3) for x > p1. */
        static const short NIFTI_INTENT_WEIBULL;
        
        /*! [C1, chap 18] Chi distribution (1 param): p1 = DOF.
         Density(x) proportional to x^(p1-1) * exp(-x^2/2) for x > 0.
         p1 = 1 = 'half normal' distribution
         p1 = 2 = Rayleigh distribution
         p1 = 3 = Maxwell-Boltzmann distribution.                  */
        static const short NIFTI_INTENT_CHI;
        
        /*! [C1, chap 15] Inverse Gaussian (2 params):
         p1 = mu, p2 = lambda
         Density(x) proportional to
         exp(-p2*(x-p1)^2/(2*p1^2*x)) / x^3  for x > 0. */
        static const short NIFTI_INTENT_INVGAUSS;
        
        /*! [C2, chap 22] Extreme value type I (2 params):
         p1 = location, p2 = scale
         cdf(x) = exp(-exp(-(x-p1)/p2)). */
        static const short NIFTI_INTENT_EXTVAL;
        
        /*! Data is a 'p-value' (no params). */
        static const short NIFTI_INTENT_PVAL;
        
        /*! Data is ln(p-value) (no params).
         To be safe, a program should compute p = exp(-abs(this_value)).
         The nifti_stats.c library returns this_value
         as positive, so that this_value = -log(p). */
        static const short NIFTI_INTENT_LOGPVAL;
        
        /*! Data is log10(p-value) (no params).
         To be safe, a program should compute p = pow(10.,-abs(this_value)).
         The nifti_stats.c library returns this_value
         as positive, so that this_value = -log10(p). */
        static const short NIFTI_INTENT_LOG10PVAL;
        
        /*! Smallest intent_code that indicates a statistic. */
        static const short NIFTI_FIRST_STATCODE;
        
        /*! Largest intent_code that indicates a statistic. */
        static const short NIFTI_LAST_STATCODE;
        
        /*---------- these values for intent_code aren't for statistics ----------*/
        
        /*! To signify that the value at each voxel is an estimate
         of some parameter, set intent_code = NIFTI_INTENT_ESTIMATE.
         The name of the parameter may be stored in intent_name.     */
        static const short NIFTI_INTENT_ESTIMATE;
        
        /*! To signify that the value at each voxel is an index into
         some set of labels, set intent_code = NIFTI_INTENT_LABEL.
         The filename with the labels may stored in aux_file.        */
        static const short NIFTI_INTENT_LABEL;
        
        /*! To signify that the value at each voxel is an index into the
         NeuroNames labels set, set intent_code = NIFTI_INTENT_NEURONAME. */
        static const short NIFTI_INTENT_NEURONAME;
        
        /*! To store an M x N matrix at each voxel:
         - dataset must have a 5th dimension (dim[0]=5 and dim[5]>1)
         - intent_code must be NIFTI_INTENT_GENMATRIX
         - dim[5] must be M*N
         - intent_p1 must be M (in float format)
         - intent_p2 must be N (ditto)
         - the matrix values A[i][[j] are stored in row-order:
         - A[0][0] A[0][1] ... A[0][N-1]
         - A[1][0] A[1][1] ... A[1][N-1]
         - etc., until
         - A[M-1][0] A[M-1][1] ... A[M-1][N-1]        */
        static const short NIFTI_INTENT_GENMATRIX;
        
        /*! To store an NxN symmetric matrix at each voxel:
         - dataset must have a 5th dimension
         - intent_code must be NIFTI_INTENT_SYMMATRIX
         - dim[5] must be N*(N+1)/2
         - intent_p1 must be N (in float format)
         - the matrix values A[i][[j] are stored in row-order:
         - A[0][0]
         - A[1][0] A[1][1]
         - A[2][0] A[2][1] A[2][2]
         - etc.: row-by-row                           */
        static const short NIFTI_INTENT_SYMMATRIX;
        
        /*! To signify that the vector value at each voxel is to be taken
         as a displacement field or vector:
         - dataset must have a 5th dimension
         - intent_code must be NIFTI_INTENT_DISPVECT
         - dim[5] must be the dimensionality of the displacment
         vector (e.g., 3 for spatial displacement, 2 for in-plane) */
        static const short NIFTI_INTENT_DISPVECT; /* specifically for displacements */
        static const short NIFTI_INTENT_VECTOR; /* for any other type of vector */
        
        /*! To signify that the vector value at each voxel is really a
         spatial coordinate (e.g., the vertices or nodes of a surface mesh):
         - dataset must have a 5th dimension
         - intent_code must be NIFTI_INTENT_POINTSET
         - dim[0] = 5
         - dim[1] = number of points
         - dim[2] = dim[3] = dim[4] = 1
         - dim[5] must be the dimensionality of space (e.g., 3 => 3D space).
         - intent_name may describe the object these points come from
         (e.g., "pial", "gray/white" , "EEG", "MEG").                   */
        static const short NIFTI_INTENT_POINTSET;
        
        /*! To signify that the vector value at each voxel is really a triple
         of indexes (e.g., forming a triangle) from a pointset dataset:
         - dataset must have a 5th dimension
         - intent_code must be NIFTI_INTENT_TRIANGLE
         - dim[0] = 5
         - dim[1] = number of triangles
         - dim[2] = dim[3] = dim[4] = 1
         - dim[5] = 3
         - datatype should be an integer type (preferably DT_INT32)
         - the data values are indexes (0,1,...) into a pointset dataset. */
        static const short NIFTI_INTENT_TRIANGLE;
        
        /*! To signify that the vector value at each voxel is a quaternion:
         - dataset must have a 5th dimension
         - intent_code must be NIFTI_INTENT_QUATERNION
         - dim[0] = 5
         - dim[5] = 4
         - datatype should be a floating point type     */
        static const short NIFTI_INTENT_QUATERNION;
        
        /*! Dimensionless value - no params - although, as in _ESTIMATE
         the name of the parameter may be stored in intent_name.     */
        static const short NIFTI_INTENT_DIMLESS;
        
        /*---------- these values apply to GIFTI datasets ----------*/
        
        /*! To signify that the value at each location is from a time series. */
        static const short NIFTI_INTENT_TIME_SERIES;
        
        /*! To signify that the value at each location is a node index, from
         a complete surface dataset.                                       */
        static const short NIFTI_INTENT_NODE_INDEX;
        
        /*! To signify that the vector value at each location is an RGB triplet,
         of whatever type.
         - dataset must have a 5th dimension
         - dim[0] = 5
         - dim[1] = number of nodes
         - dim[2] = dim[3] = dim[4] = 1
         - dim[5] = 3
         */
        static const short NIFTI_INTENT_RGB_VECTOR;
        
        /*! To signify that the vector value at each location is a 4 valued RGBA
         vector, of whatever type.
         - dataset must have a 5th dimension
         - dim[0] = 5
         - dim[1] = number of nodes
         - dim[2] = dim[3] = dim[4] = 1
         - dim[5] = 4
         */
        static const short NIFTI_INTENT_RGBA_VECTOR;
        
        /*! To signify that the value at each location is a shape value, such
         as the curvature.  */
        static const short NIFTI_INTENT_SHAPE;
        
        ///
        /// NIFTI1_XFORM_CODES
        ///
        
        /*! Arbitrary coordinates (Method 1). */
        static const short NIFTI_XFORM_UNKNOWN;
        
        /*! Scanner-based anatomical coordinates */
        static const short NIFTI_XFORM_SCANNER_ANAT;
        
        /*! Coordinates aligned to another file's,
         or to anatomical "truth".            */
        static const short NIFTI_XFORM_ALIGNED_ANAT;
        
        /*! Coordinates aligned to Talairach-
         Tournoux Atlas; (0,0,0)=AC, etc. */
        static const short NIFTI_XFORM_TALAIRACH;
        
        /*! MNI 152 normalized coordinates. */
        static const short NIFTI_XFORM_MNI_152;
        
        ///
        /// NIFTI1_UNITS
        ///
        
        /*! NIFTI code for unspecified units. */
        static const short NIFTI_UNITS_UNKNOWN;
        
        /** Space codes are multiples of 1. **/
        /*! NIFTI code for meters. */
        static const short NIFTI_UNITS_METER;
        /*! NIFTI code for millimeters. */
        static const short NIFTI_UNITS_MM;
        /*! NIFTI code for micrometers. */
        static const short NIFTI_UNITS_MICRON;
        
        /** Time codes are multiples of 8. **/
        /*! NIFTI code for seconds. */
        static const short NIFTI_UNITS_SEC;
        /*! NIFTI code for milliseconds. */
        static const short NIFTI_UNITS_MSEC;
        /*! NIFTI code for microseconds. */
        static const short NIFTI_UNITS_USEC;
        
        /*** These units are for spectral data: ***/
        /*! NIFTI code for Hertz. */
        static const short NIFTI_UNITS_HZ;
        /*! NIFTI code for ppm. */
        static const short NIFTI_UNITS_PPM;
        /*! NIFTI code for radians per second. */
        static const short NIFTI_UNITS_RADS;
        
        ///
        /// NIFTI1_SLICE_ORDER
        ///
        static const char NIFTI_SLICE_UNKNOWN;
        static const char NIFTI_SLICE_SEQ_INC;
        static const char NIFTI_SLICE_SEQ_DEC;
        static const char NIFTI_SLICE_ALT_INC;
        static const char NIFTI_SLICE_ALT_DEC;
        static const char NIFTI_SLICE_ALT_INC2;
        static const char NIFTI_SLICE_ALT_DEC2;
        
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
                                ///  Normal case \default 0
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
