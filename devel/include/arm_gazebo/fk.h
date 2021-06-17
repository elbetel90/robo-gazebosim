// Generated by gencpp from file arm_gazebo/fk.msg
// DO NOT EDIT!


#ifndef ARM_GAZEBO_MESSAGE_FK_H
#define ARM_GAZEBO_MESSAGE_FK_H

#include <ros/service_traits.h>


#include <arm_gazebo/fkRequest.h>
#include <arm_gazebo/fkResponse.h>


namespace arm_gazebo
{

struct fk
{

typedef fkRequest Request;
typedef fkResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct fk
} // namespace arm_gazebo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::arm_gazebo::fk > {
  static const char* value()
  {
    return "983ceff1c2f2603605ab3cc1ed99a3a4";
  }

  static const char* value(const ::arm_gazebo::fk&) { return value(); }
};

template<>
struct DataType< ::arm_gazebo::fk > {
  static const char* value()
  {
    return "arm_gazebo/fk";
  }

  static const char* value(const ::arm_gazebo::fk&) { return value(); }
};


// service_traits::MD5Sum< ::arm_gazebo::fkRequest> should match
// service_traits::MD5Sum< ::arm_gazebo::fk >
template<>
struct MD5Sum< ::arm_gazebo::fkRequest>
{
  static const char* value()
  {
    return MD5Sum< ::arm_gazebo::fk >::value();
  }
  static const char* value(const ::arm_gazebo::fkRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::arm_gazebo::fkRequest> should match
// service_traits::DataType< ::arm_gazebo::fk >
template<>
struct DataType< ::arm_gazebo::fkRequest>
{
  static const char* value()
  {
    return DataType< ::arm_gazebo::fk >::value();
  }
  static const char* value(const ::arm_gazebo::fkRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::arm_gazebo::fkResponse> should match
// service_traits::MD5Sum< ::arm_gazebo::fk >
template<>
struct MD5Sum< ::arm_gazebo::fkResponse>
{
  static const char* value()
  {
    return MD5Sum< ::arm_gazebo::fk >::value();
  }
  static const char* value(const ::arm_gazebo::fkResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::arm_gazebo::fkResponse> should match
// service_traits::DataType< ::arm_gazebo::fk >
template<>
struct DataType< ::arm_gazebo::fkResponse>
{
  static const char* value()
  {
    return DataType< ::arm_gazebo::fk >::value();
  }
  static const char* value(const ::arm_gazebo::fkResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ARM_GAZEBO_MESSAGE_FK_H
