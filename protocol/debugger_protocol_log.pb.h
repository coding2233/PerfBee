// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: debugger_protocol_log.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_debugger_5fprotocol_5flog_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_debugger_5fprotocol_5flog_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_debugger_5fprotocol_5flog_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_debugger_5fprotocol_5flog_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_debugger_5fprotocol_5flog_2eproto;
namespace DebuggerProtocol {
class LogList;
class LogListDefaultTypeInternal;
extern LogListDefaultTypeInternal _LogList_default_instance_;
class LogNode;
class LogNodeDefaultTypeInternal;
extern LogNodeDefaultTypeInternal _LogNode_default_instance_;
}  // namespace DebuggerProtocol
PROTOBUF_NAMESPACE_OPEN
template<> ::DebuggerProtocol::LogList* Arena::CreateMaybeMessage<::DebuggerProtocol::LogList>(Arena*);
template<> ::DebuggerProtocol::LogNode* Arena::CreateMaybeMessage<::DebuggerProtocol::LogNode>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace DebuggerProtocol {

enum LogType : int {
  Error = 0,
  Assert = 1,
  Warning = 2,
  Log = 3,
  Exception = 4,
  LogType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  LogType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool LogType_IsValid(int value);
constexpr LogType LogType_MIN = Error;
constexpr LogType LogType_MAX = Exception;
constexpr int LogType_ARRAYSIZE = LogType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LogType_descriptor();
template<typename T>
inline const std::string& LogType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LogType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LogType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LogType_descriptor(), enum_t_value);
}
inline bool LogType_Parse(
    const std::string& name, LogType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LogType>(
    LogType_descriptor(), name, value);
}
// ===================================================================

class LogNode :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:DebuggerProtocol.LogNode) */ {
 public:
  LogNode();
  virtual ~LogNode();

  LogNode(const LogNode& from);
  LogNode(LogNode&& from) noexcept
    : LogNode() {
    *this = ::std::move(from);
  }

  inline LogNode& operator=(const LogNode& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogNode& operator=(LogNode&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LogNode& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogNode* internal_default_instance() {
    return reinterpret_cast<const LogNode*>(
               &_LogNode_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LogNode& a, LogNode& b) {
    a.Swap(&b);
  }
  inline void Swap(LogNode* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogNode* New() const final {
    return CreateMaybeMessage<LogNode>(nullptr);
  }

  LogNode* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogNode>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogNode& from);
  void MergeFrom(const LogNode& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LogNode* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "DebuggerProtocol.LogNode";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_debugger_5fprotocol_5flog_2eproto);
    return ::descriptor_table_debugger_5fprotocol_5flog_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLogTimeFieldNumber = 1,
    kLogMessageFieldNumber = 4,
    kLogStackTrackFieldNumber = 5,
    kLogFrameCountFieldNumber = 2,
    kLogTypeFieldNumber = 3,
  };
  // string log_time = 1;
  void clear_log_time();
  const std::string& log_time() const;
  void set_log_time(const std::string& value);
  void set_log_time(std::string&& value);
  void set_log_time(const char* value);
  void set_log_time(const char* value, size_t size);
  std::string* mutable_log_time();
  std::string* release_log_time();
  void set_allocated_log_time(std::string* log_time);

  // string log_message = 4;
  void clear_log_message();
  const std::string& log_message() const;
  void set_log_message(const std::string& value);
  void set_log_message(std::string&& value);
  void set_log_message(const char* value);
  void set_log_message(const char* value, size_t size);
  std::string* mutable_log_message();
  std::string* release_log_message();
  void set_allocated_log_message(std::string* log_message);

  // string log_stack_track = 5;
  void clear_log_stack_track();
  const std::string& log_stack_track() const;
  void set_log_stack_track(const std::string& value);
  void set_log_stack_track(std::string&& value);
  void set_log_stack_track(const char* value);
  void set_log_stack_track(const char* value, size_t size);
  std::string* mutable_log_stack_track();
  std::string* release_log_stack_track();
  void set_allocated_log_stack_track(std::string* log_stack_track);

  // int32 log_frame_count = 2;
  void clear_log_frame_count();
  ::PROTOBUF_NAMESPACE_ID::int32 log_frame_count() const;
  void set_log_frame_count(::PROTOBUF_NAMESPACE_ID::int32 value);

  // .DebuggerProtocol.LogType log_type = 3;
  void clear_log_type();
  ::DebuggerProtocol::LogType log_type() const;
  void set_log_type(::DebuggerProtocol::LogType value);

  // @@protoc_insertion_point(class_scope:DebuggerProtocol.LogNode)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr log_time_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr log_message_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr log_stack_track_;
  ::PROTOBUF_NAMESPACE_ID::int32 log_frame_count_;
  int log_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_debugger_5fprotocol_5flog_2eproto;
};
// -------------------------------------------------------------------

class LogList :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:DebuggerProtocol.LogList) */ {
 public:
  LogList();
  virtual ~LogList();

  LogList(const LogList& from);
  LogList(LogList&& from) noexcept
    : LogList() {
    *this = ::std::move(from);
  }

  inline LogList& operator=(const LogList& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogList& operator=(LogList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LogList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogList* internal_default_instance() {
    return reinterpret_cast<const LogList*>(
               &_LogList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LogList& a, LogList& b) {
    a.Swap(&b);
  }
  inline void Swap(LogList* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogList* New() const final {
    return CreateMaybeMessage<LogList>(nullptr);
  }

  LogList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogList& from);
  void MergeFrom(const LogList& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LogList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "DebuggerProtocol.LogList";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_debugger_5fprotocol_5flog_2eproto);
    return ::descriptor_table_debugger_5fprotocol_5flog_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLogNodeListFieldNumber = 1,
  };
  // repeated .DebuggerProtocol.LogNode log_node_list = 1;
  int log_node_list_size() const;
  void clear_log_node_list();
  ::DebuggerProtocol::LogNode* mutable_log_node_list(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DebuggerProtocol::LogNode >*
      mutable_log_node_list();
  const ::DebuggerProtocol::LogNode& log_node_list(int index) const;
  ::DebuggerProtocol::LogNode* add_log_node_list();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DebuggerProtocol::LogNode >&
      log_node_list() const;

  // @@protoc_insertion_point(class_scope:DebuggerProtocol.LogList)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DebuggerProtocol::LogNode > log_node_list_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_debugger_5fprotocol_5flog_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogNode

// string log_time = 1;
inline void LogNode::clear_log_time() {
  log_time_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& LogNode::log_time() const {
  // @@protoc_insertion_point(field_get:DebuggerProtocol.LogNode.log_time)
  return log_time_.GetNoArena();
}
inline void LogNode::set_log_time(const std::string& value) {
  
  log_time_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DebuggerProtocol.LogNode.log_time)
}
inline void LogNode::set_log_time(std::string&& value) {
  
  log_time_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DebuggerProtocol.LogNode.log_time)
}
inline void LogNode::set_log_time(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  log_time_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DebuggerProtocol.LogNode.log_time)
}
inline void LogNode::set_log_time(const char* value, size_t size) {
  
  log_time_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DebuggerProtocol.LogNode.log_time)
}
inline std::string* LogNode::mutable_log_time() {
  
  // @@protoc_insertion_point(field_mutable:DebuggerProtocol.LogNode.log_time)
  return log_time_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LogNode::release_log_time() {
  // @@protoc_insertion_point(field_release:DebuggerProtocol.LogNode.log_time)
  
  return log_time_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LogNode::set_allocated_log_time(std::string* log_time) {
  if (log_time != nullptr) {
    
  } else {
    
  }
  log_time_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), log_time);
  // @@protoc_insertion_point(field_set_allocated:DebuggerProtocol.LogNode.log_time)
}

// int32 log_frame_count = 2;
inline void LogNode::clear_log_frame_count() {
  log_frame_count_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LogNode::log_frame_count() const {
  // @@protoc_insertion_point(field_get:DebuggerProtocol.LogNode.log_frame_count)
  return log_frame_count_;
}
inline void LogNode::set_log_frame_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  log_frame_count_ = value;
  // @@protoc_insertion_point(field_set:DebuggerProtocol.LogNode.log_frame_count)
}

// .DebuggerProtocol.LogType log_type = 3;
inline void LogNode::clear_log_type() {
  log_type_ = 0;
}
inline ::DebuggerProtocol::LogType LogNode::log_type() const {
  // @@protoc_insertion_point(field_get:DebuggerProtocol.LogNode.log_type)
  return static_cast< ::DebuggerProtocol::LogType >(log_type_);
}
inline void LogNode::set_log_type(::DebuggerProtocol::LogType value) {
  
  log_type_ = value;
  // @@protoc_insertion_point(field_set:DebuggerProtocol.LogNode.log_type)
}

// string log_message = 4;
inline void LogNode::clear_log_message() {
  log_message_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& LogNode::log_message() const {
  // @@protoc_insertion_point(field_get:DebuggerProtocol.LogNode.log_message)
  return log_message_.GetNoArena();
}
inline void LogNode::set_log_message(const std::string& value) {
  
  log_message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DebuggerProtocol.LogNode.log_message)
}
inline void LogNode::set_log_message(std::string&& value) {
  
  log_message_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DebuggerProtocol.LogNode.log_message)
}
inline void LogNode::set_log_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  log_message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DebuggerProtocol.LogNode.log_message)
}
inline void LogNode::set_log_message(const char* value, size_t size) {
  
  log_message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DebuggerProtocol.LogNode.log_message)
}
inline std::string* LogNode::mutable_log_message() {
  
  // @@protoc_insertion_point(field_mutable:DebuggerProtocol.LogNode.log_message)
  return log_message_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LogNode::release_log_message() {
  // @@protoc_insertion_point(field_release:DebuggerProtocol.LogNode.log_message)
  
  return log_message_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LogNode::set_allocated_log_message(std::string* log_message) {
  if (log_message != nullptr) {
    
  } else {
    
  }
  log_message_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), log_message);
  // @@protoc_insertion_point(field_set_allocated:DebuggerProtocol.LogNode.log_message)
}

// string log_stack_track = 5;
inline void LogNode::clear_log_stack_track() {
  log_stack_track_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& LogNode::log_stack_track() const {
  // @@protoc_insertion_point(field_get:DebuggerProtocol.LogNode.log_stack_track)
  return log_stack_track_.GetNoArena();
}
inline void LogNode::set_log_stack_track(const std::string& value) {
  
  log_stack_track_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DebuggerProtocol.LogNode.log_stack_track)
}
inline void LogNode::set_log_stack_track(std::string&& value) {
  
  log_stack_track_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DebuggerProtocol.LogNode.log_stack_track)
}
inline void LogNode::set_log_stack_track(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  log_stack_track_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DebuggerProtocol.LogNode.log_stack_track)
}
inline void LogNode::set_log_stack_track(const char* value, size_t size) {
  
  log_stack_track_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DebuggerProtocol.LogNode.log_stack_track)
}
inline std::string* LogNode::mutable_log_stack_track() {
  
  // @@protoc_insertion_point(field_mutable:DebuggerProtocol.LogNode.log_stack_track)
  return log_stack_track_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LogNode::release_log_stack_track() {
  // @@protoc_insertion_point(field_release:DebuggerProtocol.LogNode.log_stack_track)
  
  return log_stack_track_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LogNode::set_allocated_log_stack_track(std::string* log_stack_track) {
  if (log_stack_track != nullptr) {
    
  } else {
    
  }
  log_stack_track_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), log_stack_track);
  // @@protoc_insertion_point(field_set_allocated:DebuggerProtocol.LogNode.log_stack_track)
}

// -------------------------------------------------------------------

// LogList

// repeated .DebuggerProtocol.LogNode log_node_list = 1;
inline int LogList::log_node_list_size() const {
  return log_node_list_.size();
}
inline void LogList::clear_log_node_list() {
  log_node_list_.Clear();
}
inline ::DebuggerProtocol::LogNode* LogList::mutable_log_node_list(int index) {
  // @@protoc_insertion_point(field_mutable:DebuggerProtocol.LogList.log_node_list)
  return log_node_list_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DebuggerProtocol::LogNode >*
LogList::mutable_log_node_list() {
  // @@protoc_insertion_point(field_mutable_list:DebuggerProtocol.LogList.log_node_list)
  return &log_node_list_;
}
inline const ::DebuggerProtocol::LogNode& LogList::log_node_list(int index) const {
  // @@protoc_insertion_point(field_get:DebuggerProtocol.LogList.log_node_list)
  return log_node_list_.Get(index);
}
inline ::DebuggerProtocol::LogNode* LogList::add_log_node_list() {
  // @@protoc_insertion_point(field_add:DebuggerProtocol.LogList.log_node_list)
  return log_node_list_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DebuggerProtocol::LogNode >&
LogList::log_node_list() const {
  // @@protoc_insertion_point(field_list:DebuggerProtocol.LogList.log_node_list)
  return log_node_list_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace DebuggerProtocol

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::DebuggerProtocol::LogType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::DebuggerProtocol::LogType>() {
  return ::DebuggerProtocol::LogType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_debugger_5fprotocol_5flog_2eproto
