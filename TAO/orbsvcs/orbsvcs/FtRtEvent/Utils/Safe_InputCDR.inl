// $Id$

inline 
Safe_InputCDR::Safe_InputCDR(const char* buf, int size)
: TAO_InputCDR(new ACE_Data_Block)
{
  if (ACE_ptr_align_binary(buf, ACE_CDR::MAX_ALIGNMENT) != buf) {
    ACE_CDR::grow(&start_,size);
    this->start_.copy(buf, size);
  }
  else {
    this->start_.init(buf,size);
    this->start_.wr_ptr(size);
  }
};
