//
//  \file Image.h
//
//  \brief An image containing data and header information
//
//  \author Andrew Jesson
//  \date 2015 06 23
//  \since 1.0
//  \ingroup group miio
//
//  Copyright (c) 2015 Andrew Jesson. All rights reserved.
//

#ifndef __miio__image__
#define __miio__image__

#include <iostream>
#include "ImageHeader.h"

namespace miio
{
    
    ///
    ///
    ///
    class Image
    {
        
    public:
        
        ///
        /// \brief default Image constructor
        ///
        Image();
        
        ///
        /// \brief Image constructor for automatically
        ///        reading image from file
        ///
        Image(const char *filename);
        
        ///
        /// \brief Read Image from file
        ///
        void Read(const char *filename);
        
        ///
        /// \brief Write Image to file
        ///
        void Write(const char *filename);
        
        ///
        /// \brief Get pixel/voxel spacing
        ///
        void GetSpacing(float spacing[]);
        void GetSpacing(double spacing[]);
        
        ///
        /// \brief Get data buffer given desired format
        ///
        void GetData(char *data);
        void GetData(short *data);
        void GetData(int *data);
        void GetData(long *data);
        void GetData(long long *data);
        void GetData(float *data);
        void GetData(double *data);
        void GetData(long double *data);
        
        ///
        /// \brief Set pixel/voxel spacing
        ///
        void SetSpacing(float spacing[]);
        void SetSpacing(double spacing[]);
        
        ///
        /// \brief Set data buffer given desired format
        ///
        void SetData(char *data);
        void SetData(short *data);
        void SetData(int *data);
        void SetData(long *data);
        void SetData(long long *data);
        void SetData(float *data);
        void SetData(double *data);
        void SetData(long double *data);
        
    private:
        
        ImageHeader mHeader;
        char        *mDataBuffer;
        
    protected:
        
        
        
    }; // end class image
    
} // end namespace miio

#endif /* defined(__miio__Image__) */
