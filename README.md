# miio
miio is a C++ API for creating, reading, and writing medical image formatted files.

DESIGN TENETS:

  1. Read, write, or create an image in two or less lines of code.
  2. Image (meta)data available for manipulation by friend functions.
  3. Human readable, simple, and unambiguous interface.
  4. Dependency free.
  5. Cross platform.
  6. Free to use.

PRODUCTION PHASES:

  1.      Nifti-1 file support
  2.      Nifti-1 + gzip file support
  3.      Nifti-2 + gzip file support
  4.      DICOM, MINC, MetaImage, ... support
  
IDEAL WORKFLOW:

  -       const char[] in_file_1 = "input1.nii.gz";
  -       const char[] in_file_2 = "input2.nii.gz";
  -       const char[] out_file = "output.nii.gz";
  
  -       miio::Image input_image_1 = new miio::Image(in_file_1);
  -       miio::Image input_image_2 = new miio::Image(in_file_2);
  -       miio::Image output_image = new miio::Image();
  
  -       output_image = mimath::Add(input_image_1,input_image_2);
  
  -       output_image.Write(out_file);
