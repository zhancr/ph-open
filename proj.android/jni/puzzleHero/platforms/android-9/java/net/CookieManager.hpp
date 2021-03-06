/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.CookieManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_COOKIEMANAGER_HPP_DECL
#define J2CPP_JAVA_NET_COOKIEMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace net { class CookieHandler; } } }
namespace j2cpp { namespace java { namespace net { class CookieStore; } } }
namespace j2cpp { namespace java { namespace net { class CookiePolicy; } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }


#include <java/lang/Object.hpp>
#include <java/net/CookieHandler.hpp>
#include <java/net/CookiePolicy.hpp>
#include <java/net/CookieStore.hpp>
#include <java/net/URI.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace net {

	class CookieManager;
	class CookieManager
		: public object<CookieManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit CookieManager(jobject jobj)
		: object<CookieManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::net::CookieHandler>() const;


		CookieManager();
		CookieManager(local_ref< java::net::CookieStore > const&, local_ref< java::net::CookiePolicy > const&);
		local_ref< java::util::Map > get(local_ref< java::net::URI >  const&, local_ref< java::util::Map >  const&);
		void put(local_ref< java::net::URI >  const&, local_ref< java::util::Map >  const&);
		void setCookiePolicy(local_ref< java::net::CookiePolicy >  const&);
		local_ref< java::net::CookieStore > getCookieStore();
	}; //class CookieManager

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_COOKIEMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_COOKIEMANAGER_HPP_IMPL
#define J2CPP_JAVA_NET_COOKIEMANAGER_HPP_IMPL

namespace j2cpp {



java::net::CookieManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::net::CookieManager::operator local_ref<java::net::CookieHandler>() const
{
	return local_ref<java::net::CookieHandler>(get_jobject());
}


java::net::CookieManager::CookieManager()
: object<java::net::CookieManager>(
	call_new_object<
		java::net::CookieManager::J2CPP_CLASS_NAME,
		java::net::CookieManager::J2CPP_METHOD_NAME(0),
		java::net::CookieManager::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::net::CookieManager::CookieManager(local_ref< java::net::CookieStore > const &a0, local_ref< java::net::CookiePolicy > const &a1)
: object<java::net::CookieManager>(
	call_new_object<
		java::net::CookieManager::J2CPP_CLASS_NAME,
		java::net::CookieManager::J2CPP_METHOD_NAME(1),
		java::net::CookieManager::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


local_ref< java::util::Map > java::net::CookieManager::get(local_ref< java::net::URI > const &a0, local_ref< java::util::Map > const &a1)
{
	return call_method<
		java::net::CookieManager::J2CPP_CLASS_NAME,
		java::net::CookieManager::J2CPP_METHOD_NAME(2),
		java::net::CookieManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::Map >
	>(get_jobject(), a0, a1);
}

void java::net::CookieManager::put(local_ref< java::net::URI > const &a0, local_ref< java::util::Map > const &a1)
{
	return call_method<
		java::net::CookieManager::J2CPP_CLASS_NAME,
		java::net::CookieManager::J2CPP_METHOD_NAME(3),
		java::net::CookieManager::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

void java::net::CookieManager::setCookiePolicy(local_ref< java::net::CookiePolicy > const &a0)
{
	return call_method<
		java::net::CookieManager::J2CPP_CLASS_NAME,
		java::net::CookieManager::J2CPP_METHOD_NAME(4),
		java::net::CookieManager::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

local_ref< java::net::CookieStore > java::net::CookieManager::getCookieStore()
{
	return call_method<
		java::net::CookieManager::J2CPP_CLASS_NAME,
		java::net::CookieManager::J2CPP_METHOD_NAME(5),
		java::net::CookieManager::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::net::CookieStore >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::net::CookieManager,"java/net/CookieManager")
J2CPP_DEFINE_METHOD(java::net::CookieManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::CookieManager,1,"<init>","(Ljava/net/CookieStore;Ljava/net/CookiePolicy;)V")
J2CPP_DEFINE_METHOD(java::net::CookieManager,2,"get","(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::net::CookieManager,3,"put","(Ljava/net/URI;Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::net::CookieManager,4,"setCookiePolicy","(Ljava/net/CookiePolicy;)V")
J2CPP_DEFINE_METHOD(java::net::CookieManager,5,"getCookieStore","()Ljava/net/CookieStore;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_COOKIEMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
