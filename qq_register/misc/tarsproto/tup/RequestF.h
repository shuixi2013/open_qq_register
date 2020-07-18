/**
 * Tencent is pleased to support the open source community by making Tars available.
 *
 * Copyright (C) 2016THL A29 Limited, a Tencent company. All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use this file except 
 * in compliance with the License. You may obtain a copy of the License at
 *
 * https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software distributed 
 * under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR 
 * CONDITIONS OF ANY KIND, either express or implied. See the License for the 
 * specific language governing permissions and limitations under the License.
 */

// **********************************************************************
// This file was generated by a TARS parser!
// TARS version 1.3.0 by WSRD Tencent.
// Generated from `RequestF.tars'
// **********************************************************************

#ifndef __REQUESTF_H_
#define __REQUESTF_H_

#include <map>
#include <string>
#include <vector>
#include "Tars.h"
using namespace std;


namespace tars
{
    struct RequestPacket : public tars::TarsStructBase
    {
    public:
        static string className()
        {
            return "tars.RequestPacket";
        }
        static string MD5()
        {
            return "ca2347e333175043f3ec17083b16e36d";
        }
        RequestPacket()
        : iVersion(0),cPacketType(0),iMessageType(0),iRequestId(0),sServantName(""),sFuncName(""),iTimeout(0)
        {
        }
        template<typename WriterT>
        void writeTo(tars::TarsOutputStream<WriterT>& _os) const
        {
            _os.write(iVersion, 1);
            _os.write(cPacketType, 2);
            _os.write(iMessageType, 3);
            _os.write(iRequestId, 4);
            _os.write(sServantName, 5);
            _os.write(sFuncName, 6);
            _os.write(sBuffer, 7);
            _os.write(iTimeout, 8);
            _os.write(context, 9);
            _os.write(status, 10);
        }
        template<typename ReaderT>
        void readFrom(tars::TarsInputStream<ReaderT>& _is)
        {
            _is.read(iVersion, 1, true);
            _is.read(cPacketType, 2, false);
            _is.read(iMessageType, 3, false);
            _is.read(iRequestId, 4, true);
            _is.read(sServantName, 5, true);
            _is.read(sFuncName, 6, true);
            _is.read(sBuffer, 7, true);
            _is.read(iTimeout, 8, false);
            _is.read(context, 9, false);
            _is.read(status, 10, false);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.display(iVersion,"iVersion");
            _ds.display(cPacketType,"cPacketType");
            _ds.display(iMessageType,"iMessageType");
            _ds.display(iRequestId,"iRequestId");
            _ds.display(sServantName,"sServantName");
            _ds.display(sFuncName,"sFuncName");
            _ds.display(sBuffer,"sBuffer");
            _ds.display(iTimeout,"iTimeout");
            _ds.display(context,"context");
            _ds.display(status,"status");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.displaySimple(iVersion, true);
            _ds.displaySimple(cPacketType, true);
            _ds.displaySimple(iMessageType, true);
            _ds.displaySimple(iRequestId, true);
            _ds.displaySimple(sServantName, true);
            _ds.displaySimple(sFuncName, true);
            _ds.displaySimple(sBuffer, true);
            _ds.displaySimple(iTimeout, true);
            _ds.displaySimple(context, true);
            _ds.displaySimple(status, false);
            return _os;
        }
    public:
        tars::Short iVersion;
        tars::Char cPacketType;
        tars::Int32 iMessageType;
        tars::Int32 iRequestId;
        std::string sServantName;
        std::string sFuncName;
        vector<tars::Char> sBuffer;
        tars::Int32 iTimeout;
        map<std::string, std::string> context;
        map<std::string, std::string> status;
    };
    inline bool operator==(const RequestPacket&l, const RequestPacket&r)
    {
        return l.iVersion == r.iVersion && l.cPacketType == r.cPacketType && l.iMessageType == r.iMessageType && l.iRequestId == r.iRequestId && l.sServantName == r.sServantName && l.sFuncName == r.sFuncName && l.sBuffer == r.sBuffer && l.iTimeout == r.iTimeout && l.context == r.context && l.status == r.status;
    }
    inline bool operator!=(const RequestPacket&l, const RequestPacket&r)
    {
        return !(l == r);
    }

    struct ResponsePacket : public tars::TarsStructBase
    {
    public:
        static string className()
        {
            return "tars.ResponsePacket";
        }
        static string MD5()
        {
            return "e346c0b63b342da9b1574755188f1e86";
        }
        ResponsePacket()
        : iVersion(0),cPacketType(0),iRequestId(0),iMessageType(0),iRet(0),sResultDesc("")
        {
        }
        template<typename WriterT>
        void writeTo(tars::TarsOutputStream<WriterT>& _os) const
        {
            _os.write(iVersion, 1);
            _os.write(cPacketType, 2);
            _os.write(iRequestId, 3);
            _os.write(iMessageType, 4);
            _os.write(iRet, 5);
            _os.write(sBuffer, 6);
            _os.write(status, 7);
            _os.write(sResultDesc, 8);
        }
        template<typename ReaderT>
        void readFrom(tars::TarsInputStream<ReaderT>& _is)
        {
            _is.read(iVersion, 1, true);
            _is.read(cPacketType, 2, false);
            _is.read(iRequestId, 3, true);
            _is.read(iMessageType, 4, false);
            _is.read(iRet, 5, false);
            _is.read(sBuffer, 6, true);
            _is.read(status, 7, false);
            _is.read(sResultDesc, 8, false);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.display(iVersion,"iVersion");
            _ds.display(cPacketType,"cPacketType");
            _ds.display(iRequestId,"iRequestId");
            _ds.display(iMessageType,"iMessageType");
            _ds.display(iRet,"iRet");
            _ds.display(sBuffer,"sBuffer");
            _ds.display(status,"status");
            _ds.display(sResultDesc,"sResultDesc");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.displaySimple(iVersion, true);
            _ds.displaySimple(cPacketType, true);
            _ds.displaySimple(iRequestId, true);
            _ds.displaySimple(iMessageType, true);
            _ds.displaySimple(iRet, true);
            _ds.displaySimple(sBuffer, true);
            _ds.displaySimple(status, true);
            _ds.displaySimple(sResultDesc, false);
            return _os;
        }
    public:
        tars::Short iVersion;
        tars::Char cPacketType;
        tars::Int32 iRequestId;
        tars::Int32 iMessageType;
        tars::Int32 iRet;
        vector<tars::Char> sBuffer;
        map<std::string, std::string> status;
        std::string sResultDesc;
    };
    inline bool operator==(const ResponsePacket&l, const ResponsePacket&r)
    {
        return l.iVersion == r.iVersion && l.cPacketType == r.cPacketType && l.iRequestId == r.iRequestId && l.iMessageType == r.iMessageType && l.iRet == r.iRet && l.sBuffer == r.sBuffer && l.status == r.status && l.sResultDesc == r.sResultDesc;
    }
    inline bool operator!=(const ResponsePacket&l, const ResponsePacket&r)
    {
        return !(l == r);
    }


}

#define tars_RequestPacket_TARS_COPY_STRUCT_HELPER   \
        tars_copy_struct(a.iVersion,b.iVersion);tars_copy_struct(a.cPacketType,b.cPacketType);tars_copy_struct(a.iMessageType,b.iMessageType);tars_copy_struct(a.iRequestId,b.iRequestId);tars_copy_struct(a.sServantName,b.sServantName);tars_copy_struct(a.sFuncName,b.sFuncName);tars_copy_struct(a.sBuffer,b.sBuffer);tars_copy_struct(a.iTimeout,b.iTimeout);tars_copy_struct(a.context,b.context);tars_copy_struct(a.status,b.status);

#define tars_ResponsePacket_TARS_COPY_STRUCT_HELPER   \
        tars_copy_struct(a.iVersion,b.iVersion);tars_copy_struct(a.cPacketType,b.cPacketType);tars_copy_struct(a.iRequestId,b.iRequestId);tars_copy_struct(a.iMessageType,b.iMessageType);tars_copy_struct(a.iRet,b.iRet);tars_copy_struct(a.sBuffer,b.sBuffer);tars_copy_struct(a.status,b.status);tars_copy_struct(a.sResultDesc,b.sResultDesc);



#endif
