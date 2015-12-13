// -------------------------------------------------------------------------
//    @FileName         :    NFIUUIDModule.h
//    @Author           :    eliteYang
//    @Date             :    2014-4-9
//    @Module           :    NFIUUIDModule
//
// -------------------------------------------------------------------------

#ifndef _NFI_UUID_MODULE_H
#define _NFI_UUID_MODULE_H

#include "NFILogicModule.h"

class NFIUUIDModule
    : public NFILogicModule
{
public:
    virtual NFGUID CreateGUID() = 0;
    virtual NFINT64 GetIdentID() = 0;
    virtual void SetIdentID(NFINT64 nID) = 0;
};

#endif // !_NFI_UUID_MODULE_H