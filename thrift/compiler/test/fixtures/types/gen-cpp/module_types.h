/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp/Thrift.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/protocol/TProtocol.h>
#include <thrift/lib/cpp/transport/TTransport.h>

namespace apache { namespace thrift { namespace reflection {
class Schema;
}}}


namespace apache { namespace thrift { namespace fixtures { namespace types {

class decorated_struct;

typedef std::map<std::string, int64_t>  decorated_map;

}}}} // namespace

namespace std {
template<> struct hash<typename  ::apache::thrift::fixtures::types::decorated_map> {
size_t operator()(const  ::apache::thrift::fixtures::types::decorated_map&) const;
};
template<> struct equal_to<typename  ::apache::thrift::fixtures::types::decorated_map> {
bool operator()(const  ::apache::thrift::fixtures::types::decorated_map&, 
const  ::apache::thrift::fixtures::types::decorated_map&) const;
};
} // namespace

namespace apache { namespace thrift { namespace fixtures { namespace types {

void swap(decorated_struct &a, decorated_struct &b);

class decorated_struct : public apache::thrift::TStructType<decorated_struct> {
 public:

  static const uint64_t _reflection_id = 2133116297910176940U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  decorated_struct() {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit decorated_struct(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    decorated_struct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    field = arg.move();
    __isset.field = true;
  }

  decorated_struct(const decorated_struct&) = default;
  decorated_struct& operator=(const decorated_struct& src)= default;
  decorated_struct(decorated_struct&&) = default;
  decorated_struct& operator=(decorated_struct&&) = default;

  void __clear();

  virtual ~decorated_struct() throw() {}

  std::string field;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      field = false;
    }
    bool field;
  } __isset;

  bool operator == (const decorated_struct &) const;
  bool operator != (const decorated_struct& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const decorated_struct & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class decorated_struct;
void merge(const decorated_struct& from, decorated_struct& to);
void merge(decorated_struct&& from, decorated_struct& to);
}}}} // namespace

namespace std {
template<> struct hash<typename  ::apache::thrift::fixtures::types::decorated_struct> {
size_t operator()(const  ::apache::thrift::fixtures::types::decorated_struct&) const;
};
template<> struct equal_to<typename  ::apache::thrift::fixtures::types::decorated_struct> {
bool operator()(const  ::apache::thrift::fixtures::types::decorated_struct&, 
const  ::apache::thrift::fixtures::types::decorated_struct&) const;
};
} // namespace

namespace apache { namespace thrift { namespace fixtures { namespace types {

}}}} // namespace
