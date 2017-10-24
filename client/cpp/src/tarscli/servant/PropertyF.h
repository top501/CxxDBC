// **********************************************************************
// This file was generated by a TARS parser!
// TARS version 1.0.1.
// **********************************************************************

#ifndef __PROPERTYF_H_
#define __PROPERTYF_H_

#include <map>
#include <string>
#include <vector>
#include "tup/Tars.h"
using namespace std;
#include "servant/ServantProxy.h"
#include "servant/Servant.h"
#include "promise/promise.h"


namespace tars
{
    struct StatPropMsgHead : public tars::TarsStructBase
    {
    public:
        static string className()
        {
            return "tars.StatPropMsgHead";
        }
        static string MD5()
        {
            return "d2ac237a041614653e106dacfc9ae9aa";
        }
        StatPropMsgHead()
        :moduleName(""),ip(""),propertyName(""),setName(""),setArea(""),setID(""),sContainer(""),iPropertyVer(1)
        {
        }
        void resetDefautlt()
        {
            moduleName = "";
            ip = "";
            propertyName = "";
            setName = "";
            setArea = "";
            setID = "";
            sContainer = "";
            iPropertyVer = 1;
        }
        template<typename WriterT>
        void writeTo(tars::TarsOutputStream<WriterT>& _os) const
        {
            _os.write(moduleName, 0);
            _os.write(ip, 1);
            _os.write(propertyName, 2);
            if (setName != "")
            {
                _os.write(setName, 3);
            }
            if (setArea != "")
            {
                _os.write(setArea, 4);
            }
            if (setID != "")
            {
                _os.write(setID, 5);
            }
            if (sContainer != "")
            {
                _os.write(sContainer, 6);
            }
            if (iPropertyVer != 1)
            {
                _os.write(iPropertyVer, 7);
            }
        }
        template<typename ReaderT>
        void readFrom(tars::TarsInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(moduleName, 0, true);
            _is.read(ip, 1, true);
            _is.read(propertyName, 2, true);
            _is.read(setName, 3, false);
            _is.read(setArea, 4, false);
            _is.read(setID, 5, false);
            _is.read(sContainer, 6, false);
            _is.read(iPropertyVer, 7, false);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.display(moduleName,"moduleName");
            _ds.display(ip,"ip");
            _ds.display(propertyName,"propertyName");
            _ds.display(setName,"setName");
            _ds.display(setArea,"setArea");
            _ds.display(setID,"setID");
            _ds.display(sContainer,"sContainer");
            _ds.display(iPropertyVer,"iPropertyVer");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.displaySimple(moduleName, true);
            _ds.displaySimple(ip, true);
            _ds.displaySimple(propertyName, true);
            _ds.displaySimple(setName, true);
            _ds.displaySimple(setArea, true);
            _ds.displaySimple(setID, true);
            _ds.displaySimple(sContainer, true);
            _ds.displaySimple(iPropertyVer, false);
            return _os;
        }
    public:
        std::string moduleName;
        std::string ip;
        std::string propertyName;
        std::string setName;
        std::string setArea;
        std::string setID;
        std::string sContainer;
        tars::Int32 iPropertyVer;
    };
    inline bool operator==(const StatPropMsgHead&l, const StatPropMsgHead&r)
    {
        return l.moduleName == r.moduleName && l.ip == r.ip && l.propertyName == r.propertyName && l.setName == r.setName && l.setArea == r.setArea && l.setID == r.setID && l.sContainer == r.sContainer && l.iPropertyVer == r.iPropertyVer;
    }
    inline bool operator!=(const StatPropMsgHead&l, const StatPropMsgHead&r)
    {
        return !(l == r);
    }
    inline bool operator<(const StatPropMsgHead&l, const StatPropMsgHead&r)
    {
        if(l.moduleName != r.moduleName)  return (l.moduleName < r.moduleName);
        if(l.ip != r.ip)  return (l.ip < r.ip);
        if(l.propertyName != r.propertyName)  return (l.propertyName < r.propertyName);
        if(l.setName != r.setName)  return (l.setName < r.setName);
        if(l.setArea != r.setArea)  return (l.setArea < r.setArea);
        if(l.setID != r.setID)  return (l.setID < r.setID);
        return false;
    }
    inline bool operator<=(const StatPropMsgHead&l, const StatPropMsgHead&r)
    {
        return !(r < l);
    }
    inline bool operator>(const StatPropMsgHead&l, const StatPropMsgHead&r)
    {
        return r < l;
    }
    inline bool operator>=(const StatPropMsgHead&l, const StatPropMsgHead&r)
    {
        return !(l < r);
    }

    struct StatPropInfo : public tars::TarsStructBase
    {
    public:
        static string className()
        {
            return "tars.StatPropInfo";
        }
        static string MD5()
        {
            return "325d87d477a8cf7a6468ed6bb39da964";
        }
        StatPropInfo()
        :policy(""),value("")
        {
        }
        void resetDefautlt()
        {
            policy = "";
            value = "";
        }
        template<typename WriterT>
        void writeTo(tars::TarsOutputStream<WriterT>& _os) const
        {
            _os.write(policy, 0);
            _os.write(value, 1);
        }
        template<typename ReaderT>
        void readFrom(tars::TarsInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(policy, 0, true);
            _is.read(value, 1, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.display(policy,"policy");
            _ds.display(value,"value");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.displaySimple(policy, true);
            _ds.displaySimple(value, false);
            return _os;
        }
    public:
        std::string policy;
        std::string value;
    };
    inline bool operator==(const StatPropInfo&l, const StatPropInfo&r)
    {
        return l.policy == r.policy && l.value == r.value;
    }
    inline bool operator!=(const StatPropInfo&l, const StatPropInfo&r)
    {
        return !(l == r);
    }

    struct StatPropMsgBody : public tars::TarsStructBase
    {
    public:
        static string className()
        {
            return "tars.StatPropMsgBody";
        }
        static string MD5()
        {
            return "38293decf3c0be1dca97aaa663dd9b61";
        }
        StatPropMsgBody()
        {
        }
        void resetDefautlt()
        {
        }
        template<typename WriterT>
        void writeTo(tars::TarsOutputStream<WriterT>& _os) const
        {
            _os.write(vInfo, 0);
        }
        template<typename ReaderT>
        void readFrom(tars::TarsInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(vInfo, 0, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.display(vInfo,"vInfo");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            tars::TarsDisplayer _ds(_os, _level);
            _ds.displaySimple(vInfo, false);
            return _os;
        }
    public:
        vector<tars::StatPropInfo> vInfo;
    };
    inline bool operator==(const StatPropMsgBody&l, const StatPropMsgBody&r)
    {
        return l.vInfo == r.vInfo;
    }
    inline bool operator!=(const StatPropMsgBody&l, const StatPropMsgBody&r)
    {
        return !(l == r);
    }


    /* callback of async proxy for client */
    class PropertyFPrxCallback: public tars::ServantProxyCallback
    {
    public:
        virtual ~PropertyFPrxCallback(){}
        virtual void callback_reportPropMsg(tars::Int32 ret)
        { throw std::runtime_error("callback_reportPropMsg() override incorrect."); }
        virtual void callback_reportPropMsg_exception(tars::Int32 ret)
        { throw std::runtime_error("callback_reportPropMsg_exception() override incorrect."); }

    public:
        virtual const map<std::string, std::string> & getResponseContext() const
        {
            CallbackThreadData * pCbtd = CallbackThreadData::getData();
            assert(pCbtd != NULL);

            if(!pCbtd->getContextValid())
            {
                throw TC_Exception("cann't get response context");
            }
            return pCbtd->getResponseContext();
        }

    public:
        virtual int onDispatch(tars::ReqMessagePtr msg)
        {
            static ::std::string __PropertyF_all[]=
            {
                "reportPropMsg"
            };
            pair<string*, string*> r = equal_range(__PropertyF_all, __PropertyF_all+1, string(msg->request.sFuncName));
            if(r.first == r.second) return tars::TARSSERVERNOFUNCERR;
            switch(r.first - __PropertyF_all)
            {
                case 0:
                {
                    if (msg->response.iRet != tars::TARSSERVERSUCCESS)
                    {
                        callback_reportPropMsg_exception(msg->response.iRet);

                        return msg->response.iRet;
                    }
                    tars::TarsInputStream<tars::BufferReader> _is;

                    _is.setBuffer(msg->response.sBuffer);
                    tars::Int32 _ret;
                    _is.read(_ret, 0, true);

                    CallbackThreadData * pCbtd = CallbackThreadData::getData();
                    assert(pCbtd != NULL);

                    pCbtd->setResponseContext(msg->response.context);

                    callback_reportPropMsg(_ret);

                    pCbtd->delResponseContext();

                    return tars::TARSSERVERSUCCESS;

                }
            }
            return tars::TARSSERVERNOFUNCERR;
        }

    };
    typedef tars::TC_AutoPtr<PropertyFPrxCallback> PropertyFPrxCallbackPtr;

    /* callback of promise async proxy for client */
    class PropertyFPrxCallbackPromise: public tars::ServantProxyCallback
    {
    public:
        virtual ~PropertyFPrxCallbackPromise(){}
    public:
        struct PromisereportPropMsg: virtual public TC_HandleBase
        {
        public:
            tars::Int32 _ret;
            map<std::string, std::string> _mRspContext;
        };
        
        typedef tars::TC_AutoPtr< PropertyFPrxCallbackPromise::PromisereportPropMsg > PromisereportPropMsgPtr;

        PropertyFPrxCallbackPromise(const promise::Promise< PropertyFPrxCallbackPromise::PromisereportPropMsgPtr > &promise)
        : _promise_reportPropMsg(promise)
        {}
        
        virtual void callback_reportPropMsg(const PropertyFPrxCallbackPromise::PromisereportPropMsgPtr &ptr)
        {
            _promise_reportPropMsg.setValue(ptr);
        }
        virtual void callback_reportPropMsg_exception(tars::Int32 ret)
        {
            std::string str("");
            str += "Function:reportPropMsg_exception|Ret:";
            str += TC_Common::tostr(ret);
            _promise_reportPropMsg.setException(promise::copyException(str, ret));
        }

    protected:
        promise::Promise< PropertyFPrxCallbackPromise::PromisereportPropMsgPtr > _promise_reportPropMsg;

    public:
        virtual int onDispatch(tars::ReqMessagePtr msg)
        {
            static ::std::string __PropertyF_all[]=
            {
                "reportPropMsg"
            };

            pair<string*, string*> r = equal_range(__PropertyF_all, __PropertyF_all+1, string(msg->request.sFuncName));
            if(r.first == r.second) return tars::TARSSERVERNOFUNCERR;
            switch(r.first - __PropertyF_all)
            {
                case 0:
                {
                    if (msg->response.iRet != tars::TARSSERVERSUCCESS)
                    {
                        callback_reportPropMsg_exception(msg->response.iRet);

                        return msg->response.iRet;
                    }
                    tars::TarsInputStream<tars::BufferReader> _is;

                    _is.setBuffer(msg->response.sBuffer);

                    PropertyFPrxCallbackPromise::PromisereportPropMsgPtr ptr = new PropertyFPrxCallbackPromise::PromisereportPropMsg();

                    try
                    {
                        _is.read(ptr->_ret, 0, true);

                    }
                    catch(std::exception &ex)
                    {
                        callback_reportPropMsg_exception(tars::TARSCLIENTDECODEERR);

                        return tars::TARSCLIENTDECODEERR;
                    }
                    catch(...)
                    {
                        callback_reportPropMsg_exception(tars::TARSCLIENTDECODEERR);

                        return tars::TARSCLIENTDECODEERR;
                    }

                    ptr->_mRspContext = msg->response.context;

                    callback_reportPropMsg(ptr);

                    return tars::TARSSERVERSUCCESS;

                }
            }
            return tars::TARSSERVERNOFUNCERR;
        }

    };
    typedef tars::TC_AutoPtr<PropertyFPrxCallbackPromise> PropertyFPrxCallbackPromisePtr;

    /* callback of coroutine async proxy for client */
    class PropertyFCoroPrxCallback: public PropertyFPrxCallback
    {
    public:
        virtual ~PropertyFCoroPrxCallback(){}
    public:
        virtual const map<std::string, std::string> & getResponseContext() const { return _mRspContext; }

        virtual void setResponseContext(const map<std::string, std::string> &mContext) { _mRspContext = mContext; }

    public:
        int onDispatch(tars::ReqMessagePtr msg)
        {
            static ::std::string __PropertyF_all[]=
            {
                "reportPropMsg"
            };

            pair<string*, string*> r = equal_range(__PropertyF_all, __PropertyF_all+1, string(msg->request.sFuncName));
            if(r.first == r.second) return tars::TARSSERVERNOFUNCERR;
            switch(r.first - __PropertyF_all)
            {
                case 0:
                {
                    if (msg->response.iRet != tars::TARSSERVERSUCCESS)
                    {
                        callback_reportPropMsg_exception(msg->response.iRet);

                        return msg->response.iRet;
                    }
                    tars::TarsInputStream<tars::BufferReader> _is;

                    _is.setBuffer(msg->response.sBuffer);
                    try
                    {
                        tars::Int32 _ret;
                        _is.read(_ret, 0, true);

                        setResponseContext(msg->response.context);

                        callback_reportPropMsg(_ret);

                    }
                    catch(std::exception &ex)
                    {
                        callback_reportPropMsg_exception(tars::TARSCLIENTDECODEERR);

                        return tars::TARSCLIENTDECODEERR;
                    }
                    catch(...)
                    {
                        callback_reportPropMsg_exception(tars::TARSCLIENTDECODEERR);

                        return tars::TARSCLIENTDECODEERR;
                    }

                    return tars::TARSSERVERSUCCESS;

                }
            }
            return tars::TARSSERVERNOFUNCERR;
        }

    protected:
        map<std::string, std::string> _mRspContext;
    };
    typedef tars::TC_AutoPtr<PropertyFCoroPrxCallback> PropertyFCoroPrxCallbackPtr;

    /* proxy for client */
    class PropertyFProxy : public tars::ServantProxy
    {
    public:
        typedef map<string, string> TARS_CONTEXT;
        tars::Int32 reportPropMsg(const map<tars::StatPropMsgHead, tars::StatPropMsgBody> & statmsg,const map<string, string> &context = TARS_CONTEXT(),map<string, string> * pResponseContext = NULL)
        {
            tars::TarsOutputStream<tars::BufferWriter> _os;
            _os.write(statmsg, 1);
            tars::ResponsePacket rep;
            std::map<string, string> _mStatus;
            tars_invoke(tars::TARSNORMAL,"reportPropMsg", _os.getByteBuffer(), context, _mStatus, rep);
            if(pResponseContext)
            {
                *pResponseContext = rep.context;
            }

            tars::TarsInputStream<tars::BufferReader> _is;
            _is.setBuffer(rep.sBuffer);
            tars::Int32 _ret;
            _is.read(_ret, 0, true);
            return _ret;
        }

        void async_reportPropMsg(PropertyFPrxCallbackPtr callback,const map<tars::StatPropMsgHead, tars::StatPropMsgBody> &statmsg,const map<string, string>& context = TARS_CONTEXT())
        {
            tars::TarsOutputStream<tars::BufferWriter> _os;
            _os.write(statmsg, 1);
            std::map<string, string> _mStatus;
            tars_invoke_async(tars::TARSNORMAL,"reportPropMsg", _os.getByteBuffer(), context, _mStatus, callback);
        }
        
        promise::Future< PropertyFPrxCallbackPromise::PromisereportPropMsgPtr > promise_async_reportPropMsg(const map<tars::StatPropMsgHead, tars::StatPropMsgBody> &statmsg,const map<string, string>& context)
        {
            promise::Promise< PropertyFPrxCallbackPromise::PromisereportPropMsgPtr > promise;
            PropertyFPrxCallbackPromisePtr callback = new PropertyFPrxCallbackPromise(promise);

            tars::TarsOutputStream<tars::BufferWriter> _os;
            _os.write(statmsg, 1);
            std::map<string, string> _mStatus;
            tars_invoke_async(tars::TARSNORMAL,"reportPropMsg", _os.getByteBuffer(), context, _mStatus, callback);

            return promise.getFuture();
        }

        void coro_reportPropMsg(PropertyFCoroPrxCallbackPtr callback,const map<tars::StatPropMsgHead, tars::StatPropMsgBody> &statmsg,const map<string, string>& context = TARS_CONTEXT())
        {
            tars::TarsOutputStream<tars::BufferWriter> _os;
            _os.write(statmsg, 1);
            std::map<string, string> _mStatus;
            tars_invoke_async(tars::TARSNORMAL,"reportPropMsg", _os.getByteBuffer(), context, _mStatus, callback, true);
        }

        PropertyFProxy* tars_hash(int64_t key)
        {
            return (PropertyFProxy*)ServantProxy::tars_hash(key);
        }

        PropertyFProxy* tars_consistent_hash(int64_t key)
        {
            return (PropertyFProxy*)ServantProxy::tars_consistent_hash(key);
        }

        PropertyFProxy* tars_set_timeout(int msecond)
        {
            return (PropertyFProxy*)ServantProxy::tars_set_timeout(msecond);
        }

    };
    typedef tars::TC_AutoPtr<PropertyFProxy> PropertyFPrx;

    /* servant for server */
    class PropertyF : public tars::Servant
    {
    public:
        virtual ~PropertyF(){}
        virtual tars::Int32 reportPropMsg(const map<tars::StatPropMsgHead, tars::StatPropMsgBody> & statmsg,tars::TarsCurrentPtr current) = 0;
        static void async_response_reportPropMsg(tars::TarsCurrentPtr current, tars::Int32 _ret)
        {
            if (current->getRequestVersion() == TUPVERSION )
            {
                UniAttribute<tars::BufferWriter, tars::BufferReader>  tarsAttr;
                tarsAttr.setVersion(current->getRequestVersion());
                tarsAttr.put("", _ret);

                vector<char> sTupResponseBuffer;
                tarsAttr.encode(sTupResponseBuffer);
                current->sendResponse(tars::TARSSERVERSUCCESS, sTupResponseBuffer);
            }
            else
            {
                tars::TarsOutputStream<tars::BufferWriter> _os;
                _os.write(_ret, 0);

                current->sendResponse(tars::TARSSERVERSUCCESS, _os.getByteBuffer());
            }
        }

    public:
        int onDispatch(tars::TarsCurrentPtr _current, vector<char> &_sResponseBuffer)
        {
            static ::std::string __tars__PropertyF_all[]=
            {
                "reportPropMsg"
            };

            pair<string*, string*> r = equal_range(__tars__PropertyF_all, __tars__PropertyF_all+1, _current->getFuncName());
            if(r.first == r.second) return tars::TARSSERVERNOFUNCERR;
            switch(r.first - __tars__PropertyF_all)
            {
                case 0:
                {
                    tars::TarsInputStream<tars::BufferReader> _is;
                    _is.setBuffer(_current->getRequestBuffer());
                    map<tars::StatPropMsgHead, tars::StatPropMsgBody> statmsg;
                    if (_current->getRequestVersion() == TUPVERSION)
                    {
                        UniAttribute<tars::BufferWriter, tars::BufferReader>  tarsAttr;
                        tarsAttr.setVersion(_current->getRequestVersion());
                        tarsAttr.decode(_current->getRequestBuffer());
                        tarsAttr.get("statmsg", statmsg);
                    }
                    else
                    {
                        _is.read(statmsg, 1, true);
                    }
                    tars::Int32 _ret = reportPropMsg(statmsg, _current);
                    if(_current->isResponse())
                    {
                        if (_current->getRequestVersion() == TUPVERSION )
                        {
                            UniAttribute<tars::BufferWriter, tars::BufferReader>  tarsAttr;
                            tarsAttr.setVersion(_current->getRequestVersion());
                            tarsAttr.put("", _ret);
                            tarsAttr.encode(_sResponseBuffer);
                        }
                        else
                        {
                            tars::TarsOutputStream<tars::BufferWriter> _os;
                            _os.write(_ret, 0);
                            _os.swap(_sResponseBuffer);
                        }
                    }
                    return tars::TARSSERVERSUCCESS;

                }
            }
            return tars::TARSSERVERNOFUNCERR;
        }
    };


}



#endif