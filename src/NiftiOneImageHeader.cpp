//
//  niftiOneImageHeader.cpp
//  miio
//
//  Created by Andrew on 2015-06-23.
//  Copyright (c) 2015 Jesson. All rights reserved.
//

#include "niftiOneImageHeader.h"
using namespace std;

namespace miio
{
    
    NiftiOneImageHeader::NiftiOneImageHeader()
    {
     
        m_sizeof_hdr = (int)348;
        m_dim_info = (char)0;
        for (int i = 0; i < 8; i++) {
            m_dim[i] = (short)0;
        }
        m_intent_p1 = (float)0.0;
        m_intent_p2 = (float)0.0;
        m_intent_p3 = (float)0.0;
        m_intent_code = (short)0;
        m_datatype = (short)0;
        m_bitpix = (short)0;
        m_slice_start = (short)0;
        for (int i = 0; i < 8; i++) {
            m_pixdim[i] = (float)0.0;
        }
        m_vox_offset = float(352.0);
        m_scl_slope = float(1.0);
        m_scl_inter = float(0.0);
        m_slice_end = (short)0;
        m_slice_code = (char)0;
        m_xyzt_units = (char)0;
        m_cal_max = (float)0.0;
        m_cal_min = (float)0.0;
        m_slice_duration = (float)0.0;
        m_toffset = (float)0.0;
        m_qform_code = (short)0;
        m_sform_code = (short)0;
        m_quatern_b = (float)0.0;
        m_quatern_c = (float)0.0;
        m_quatern_d = (float)0.0;
        m_qoffset_x = (float)0.0;
        m_qoffset_y = (float)0.0;
        m_qoffset_z = (float)0.0;
        for (int i = 0; i < 4; i++) {
            m_srow_x[i] = (float)0.0;
            m_srow_y[i] = (float)0.0;
            m_srow_z[i] = (float)0.0;
        }
        m_magic[1] = 'n';
        m_magic[2] = '+';
        m_magic[3] = '1';
        
    }
    
    NiftiOneImageHeader::~NiftiOneImageHeader()
    {
        
    }
    
    void NiftiOneImageHeader::Read(std::ifstream &file)
    {
        
        file.seekg (0, ios::beg);
        
        file.read((char*)&m_sizeof_hdr,4);
        
        file.read((char*)&m_data_type,10);
        
        file.read((char*)&m_db_name,18);
        
        file.read((char*)&m_extents,4);
        
        file.read((char*)&m_session_error,2);
        
        file.read((char*)&m_regular,1);
        
        file.read((char*)&m_dim_info,1);
        
        file.read((char*)&m_dim,16);
        
        file.read((char*)&m_intent_p1,4);
        
        file.read((char*)&m_intent_p2,4);
        
        file.read((char*)&m_intent_p3,4);
        
        file.read((char*)&m_intent_code,2);
        
        file.read((char*)&m_datatype,2);
        
        file.read((char*)&m_bitpix,2);
        
        file.read((char*)&m_slice_start,2);
        
        file.read((char*)&m_pixdim,32);
        
        file.read((char*)&m_vox_offset,4);
        
        file.read((char*)&m_scl_slope,4);
        
        file.read((char*)&m_scl_inter,4);
        
        file.read((char*)&m_slice_end,2);
        
        file.read((char*)&m_slice_code,1);
        
        file.read((char*)&m_xyzt_units,1);
        
        file.read((char*)&m_cal_max,4);
        
        file.read((char*)&m_cal_min,4);
        
        file.read((char*)&m_slice_duration,4);
        
        file.read((char*)&m_toffset,4);
        
        file.read((char*)&m_glmax,4);
        
        file.read((char*)&m_glmin,4);
        
        file.read((char*)&m_descrip,80);
        
        file.read((char*)&m_aux_file,24);
        
        file.read((char*)&m_qform_code,2);
        
        file.read((char*)&m_sform_code,2);
        
        file.read((char*)&m_quatern_b,4);
        
        file.read((char*)&m_quatern_c,4);
        
        file.read((char*)&m_quatern_d,4);
        
        file.read((char*)&m_qoffset_x,4);
        
        file.read((char*)&m_qoffset_y,4);
        
        file.read((char*)&m_qoffset_z,4);
        
        file.read((char*)&m_srow_x,16);
        
        file.read((char*)&m_srow_y,16);
        
        file.read((char*)&m_srow_z,16);
        
        file.read((char*)&m_intent_name,16);
        
        file.read((char*)&m_magic,4);
        
    }
    
    void NiftiOneImageHeader::Write(std::ifstream &file)
    {
        
        
        
    }
    
    void NiftiOneImageHeader::CopyMetadata(const NiftiOneImageHeader &refHeader)
    {
        
        m_dim_info = refHeader.m_dim_info;
        m_dim = refHeader.m_dim;
        m_intent_p1 = refHeader.m_intent_p1;
        m_intent_p2 = refHeader.m_intent_p2;
        m_intent_p3 = refHeader.m_intent_p3;
        m_intent_code = refHeader.m_intent_code;
        m_datatype = refHeader.m_datatype;
        m_bitpix = refHeader.m_bitpix;
        m_slice_start = refHeader.m_slice_start;
        m_pixdim = refHeader.m_pixdim;
        m_vox_offset = refHeader.m_vox_offset;
        m_scl_slope = refHeader.m_scl_slope;
        m_scl_inter = refHeader.m_scl_inter;
        m_slice_end = refHeader.m_slice_end;
        m_slice_code = refHeader.m_slice_code;
        m_xyzt_units = refHeader.m_xyzt_units;
        m_cal_min = refHeader.m_cal_min;
        m_cal_max = refHeader.m_cal_max;
        m_slice_duration = refHeader.m_slice_duration;
        m_toffset = refHeader.m_toffset;
        m_qform_code = refHeader.m_qform_code;
        m_sform_code = refHeader.m_sform_code;
        m_quatern_b = refHeader.m_quatern_b;
        m_quatern_c = refHeader.m_quatern_c;
        m_quatern_d = refHeader.m_quatern_d;
        m_qoffset_x = refHeader.m_qoffset_x;
        m_qoffset_y = refHeader.m_qoffset_y;
        m_qoffset_z = refHeader.m_qoffset_z;
        m_srow_x = refHeader.m_srow_x;
        m_srow_y = refHeader.m_srow_y;
        m_srow_z = refHeader.m_srow_z;
        m_intent_name = refHeader.m_intent_name;
        
    }
    
    void NiftiOneImageHeader::Print()
    {
        
        cout << "\n___________________Nifti 1 Image Header___________________ \n\n";
     
        cout << "Description: \t\t" << m_descrip << "\n";
        cout << "DataType: \t\t" << m_datatype << "\n";
        cout << "PixelDepth: \t\t" << m_bitpix << "\n";
        cout << "MaxIntensity: \t\t" << m_cal_max << "\n";
        cout << "MinIntensity: \t\t" << m_cal_min << "\n";
        cout << "ScalingSlope: \t\t" << m_scl_slope << "\n";
        cout << "ScalingOffset: \t\t" << m_scl_inter << "\n";
        cout << "TimeOffset: \t\t" << m_toffset << "\n";
        cout << "\n";
        
        cout << "\n DIMENSION SIZES \n";
        cout << "Num Dimensions: \t" << m_dim[0] << "\n";
        cout << "Size x: \t\t" << m_dim[1] << "\n";
        cout << "Size y: \t\t" << m_dim[2] << "\n";
        cout << "Size z: \t\t" << m_dim[3] << "\n";
        cout << "Size t: \t\t" << m_dim[4] << "\n";
        cout << "Size u: \t\t" << m_dim[5] << "\n";
        cout << "Size v: \t\t" << m_dim[6] << "\n";
        cout << "Size w: \t\t" << m_dim[7] << "\n";
        cout << "\n";
        
        cout << "\n DIMENSION SPACING \n";
        cout << "Units: \t\t" << m_xyzt_units << "\n";
        for (int i = 0; i<8; i++) {
            cout << "Spacing: \t\t" << m_pixdim[i] << "\n";
        }
        cout << "\n";
        
        cout << "\n INTENT INFORMATION \n";
        cout << "IntentName: \t\t" << m_intent_name << "\n";
        cout << "Intent Code: \t\t" << m_intent_code << "\n";
        cout << "Intent Param 1: \t" << m_intent_p1 << "\n";
        cout << "Intent Param 2: \t" << m_intent_p2 << "\n";
        cout << "Intent Param 3: \t" << m_intent_p3 << "\n";
        
        cout << "\n SLICE INFO \n";
        cout << "SliceCode: \t\t" << m_slice_code << "\n";
        cout << "SliceStart: \t\t" << m_slice_start << "\n";
        cout << "LastSlice: \t\t" << m_slice_end << "\n";
        cout << "SliceDuration: \t\t" << m_slice_duration << "\n";
        
        cout << "\n ORIENTATION INFO Q-FORM\n";
        cout << "QFormCode: \t\t" << m_qform_code << "\n";
        cout << "QuaternB: \t\t" << m_quatern_b << "\n";
        cout << "QuaternC: \t\t" << m_quatern_c << "\n";
        cout << "QuaternD: \t\t" << m_quatern_d << "\n";
        cout << "QOffsetX: \t\t" << m_qoffset_x << "\n";
        cout << "QOffsetY: \t\t" << m_qoffset_y << "\n";
        cout << "QOffsetZ: \t\t" << m_qoffset_z << "\n";
        
        cout << "\n ORIENTATION INFO S-FORM\n";
        cout << "SFormCode: \t\t" << m_sform_code << "\n";
        cout << "SRowX: \t\t\t";
        for (int i = 0; i < 4; i++) {
            cout << m_srow_x[i] << " ";
        }
        cout << "\n";
        cout << "SRowY: \t\t\t";
        for (int i = 0; i < 4; i++) {
            cout << m_srow_y[i] << " ";
        }
        cout << "\n";
        cout << "SRowZ: \t\t\t";
        for (int i = 0; i < 4; i++) {
            cout << m_srow_z[i] << " ";
        }
        cout << "\n";
        
        cout << "\n MISC \n";
        cout << "Magic: \t\t\t" << m_magic << "\n";
        cout << "Size of Header: \t" << m_sizeof_hdr << "\n";
        cout << "DataStart: \t\t" << m_vox_offset << "\n";
        cout << "AuxFile: \t\t" << m_aux_file << "\n";
        cout << "DimInfoCode: \t\t" << m_dim_info << "\n";
        
    }
    
}