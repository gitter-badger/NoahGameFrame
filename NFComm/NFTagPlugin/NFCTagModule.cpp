// -------------------------------------------------------------------------
//    @FileName      :    NFCTagModule.cpp
//    @Author           :    LvSheng.Huang
//    @Date             :    2013-07-08
//    @Module           :    NFCTagModule
//    @Desc             :
// -------------------------------------------------------------------------

#include "NFCTagModule.h"

bool NFCTagModule::Init()
{
	return true;
}

bool NFCTagModule::Shut()
{
	return true;

}

bool NFCTagModule::Execute()
{
	return true;

}

bool NFCTagModule::AfterInit()
{
	return true;

}

bool NFCTagModule::BeforeShut()
{
	return true;

}

bool NFCTagModule::GetTagList( const std::string& strTag, NFList<NFGUID>& xList)
{
	return true;
}

bool NFCTagModule::GetTagList( const TAG_DEFINE eTag, const std::string& strTag, NFList<NFGUID>& xList)
{
	return true;
}

bool NFCTagModule::AddToTagList( const std::string& strTag, const NFGUID object )
{
	return false;

}

bool NFCTagModule::AddToTagList( const TAG_DEFINE eTag, const std::string& strTag, const NFGUID object )
{
	return false;

}

bool NFCTagModule::RemoveFrmTagList( const std::string& strTag, const NFGUID object )
{
	return false;
}

bool NFCTagModule::RemoveFrmTagList( const TAG_DEFINE eTag, const std::string& strTag, const NFGUID object )
{
	return false;

}
