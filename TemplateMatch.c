/*************
*Template match function
*parameter1:source image:source image
*parameter2:match image path
***************/
int match_template(const cv::Mat *SourceImage, const std::string *MatchPath)
{
  Mat GrayImage;
  Mat ImageMatched;
  Mat ResultImage;

  ResultImage = *SourceImage;
  //Read image, while single channel image to convert
  Mat ImageTemplate;
  if(pCamParameter->TemplateColourSwitch && SourceImage->channels() == 3)
  {
    ImageTemplate = imread(*MatchPath, 1);
    GrayImage = *SourceImage;
  }
  else
  {
  
  
  }
}
