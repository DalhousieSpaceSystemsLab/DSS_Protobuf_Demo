// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: command_protocal.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_command_5fprotocal_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_command_5fprotocal_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024004 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_command_5fprotocal_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_command_5fprotocal_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_command_5fprotocal_2eproto;
namespace command {
class Command;
struct CommandDefaultTypeInternal;
extern CommandDefaultTypeInternal _Command_default_instance_;
}  // namespace command
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace command {
enum Device : int {
  IPC = 0,
  ADC = 100,
  CMM = 200,
  EPS = 300,
  OBM = 400,
  OBA = 500,
  PAY = 600,
  SFT = 700,
  THM = 800,
};

bool Device_IsValid(int value);
constexpr Device Device_MIN = static_cast<Device>(0);
constexpr Device Device_MAX = static_cast<Device>(800);
constexpr int Device_ARRAYSIZE = 800 + 1;
const ::google::protobuf::EnumDescriptor*
Device_descriptor();
template <typename T>
const std::string& Device_Name(T value) {
  static_assert(std::is_same<T, Device>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to Device_Name().");
  return ::google::protobuf::internal::NameOfEnum(Device_descriptor(), value);
}
inline bool Device_Parse(absl::string_view name, Device* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Device>(
      Device_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class Command final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:command.Command) */ {
 public:
  inline Command() : Command(nullptr) {}
  ~Command() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Command(::google::protobuf::internal::ConstantInitialized);

  Command(const Command& from);
  Command(Command&& from) noexcept
    : Command() {
    *this = ::std::move(from);
  }

  inline Command& operator=(const Command& from) {
    CopyFrom(from);
    return *this;
  }
  inline Command& operator=(Command&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Command& default_instance() {
    return *internal_default_instance();
  }
  enum DataCase {
    kStringD = 6,
    kBytesD = 7,
    kIntD = 8,
    kDoubleD = 9,
    DATA_NOT_SET = 0,
  };

  static inline const Command* internal_default_instance() {
    return reinterpret_cast<const Command*>(
               &_Command_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Command& a, Command& b) {
    a.Swap(&b);
  }
  inline void Swap(Command* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Command* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Command* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Command>(arena);
  }
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Command* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "command.Command";
  }
  protected:
  explicit Command(::google::protobuf::Arena* arena);
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCmdFieldNumber = 1,
    kSrcFieldNumber = 2,
    kDstFieldNumber = 3,
    kDttFieldNumber = 4,
    kSigFieldNumber = 5,
    kStringDFieldNumber = 6,
    kBytesDFieldNumber = 7,
    kIntDFieldNumber = 8,
    kDoubleDFieldNumber = 9,
  };
  // required uint32 cmd = 1;
  bool has_cmd() const;
  void clear_cmd() ;
  ::uint32_t cmd() const;
  void set_cmd(::uint32_t value);

  private:
  ::uint32_t _internal_cmd() const;
  void _internal_set_cmd(::uint32_t value);

  public:
  // required .command.Device src = 2;
  bool has_src() const;
  void clear_src() ;
  ::command::Device src() const;
  void set_src(::command::Device value);

  private:
  ::command::Device _internal_src() const;
  void _internal_set_src(::command::Device value);

  public:
  // required .command.Device dst = 3;
  bool has_dst() const;
  void clear_dst() ;
  ::command::Device dst() const;
  void set_dst(::command::Device value);

  private:
  ::command::Device _internal_dst() const;
  void _internal_set_dst(::command::Device value);

  public:
  // required uint32 dtt = 4;
  bool has_dtt() const;
  void clear_dtt() ;
  ::uint32_t dtt() const;
  void set_dtt(::uint32_t value);

  private:
  ::uint32_t _internal_dtt() const;
  void _internal_set_dtt(::uint32_t value);

  public:
  // required uint32 sig = 5;
  bool has_sig() const;
  void clear_sig() ;
  ::uint32_t sig() const;
  void set_sig(::uint32_t value);

  private:
  ::uint32_t _internal_sig() const;
  void _internal_set_sig(::uint32_t value);

  public:
  // string string_d = 6;
  bool has_string_d() const;
  void clear_string_d() ;
  const std::string& string_d() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_string_d(Arg_&& arg, Args_... args);
  std::string* mutable_string_d();
  PROTOBUF_NODISCARD std::string* release_string_d();
  void set_allocated_string_d(std::string* ptr);

  private:
  const std::string& _internal_string_d() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_string_d(
      const std::string& value);
  std::string* _internal_mutable_string_d();

  public:
  // bytes bytes_d = 7;
  bool has_bytes_d() const;
  void clear_bytes_d() ;
  const std::string& bytes_d() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_bytes_d(Arg_&& arg, Args_... args);
  std::string* mutable_bytes_d();
  PROTOBUF_NODISCARD std::string* release_bytes_d();
  void set_allocated_bytes_d(std::string* ptr);

  private:
  const std::string& _internal_bytes_d() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_bytes_d(
      const std::string& value);
  std::string* _internal_mutable_bytes_d();

  public:
  // int64 int_d = 8;
  bool has_int_d() const;
  void clear_int_d() ;
  ::int64_t int_d() const;
  void set_int_d(::int64_t value);

  private:
  ::int64_t _internal_int_d() const;
  void _internal_set_int_d(::int64_t value);

  public:
  // double double_d = 9;
  bool has_double_d() const;
  void clear_double_d() ;
  double double_d() const;
  void set_double_d(double value);

  private:
  double _internal_double_d() const;
  void _internal_set_double_d(double value);

  public:
  void clear_data();
  DataCase data_case() const;
  // @@protoc_insertion_point(class_scope:command.Command)
 private:
  class _Internal;
  void set_has_string_d();
  void set_has_bytes_d();
  void set_has_int_d();
  void set_has_double_d();

  inline bool has_data() const;
  inline void clear_has_data();

  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint32_t cmd_;
    int src_;
    int dst_;
    ::uint32_t dtt_;
    ::uint32_t sig_;
    union DataUnion {
      constexpr DataUnion() : _constinit_{} {}
        ::google::protobuf::internal::ConstantInitialized _constinit_;
      ::google::protobuf::internal::ArenaStringPtr string_d_;
      ::google::protobuf::internal::ArenaStringPtr bytes_d_;
      ::int64_t int_d_;
      double double_d_;
    } data_;
    ::uint32_t _oneof_case_[1];

    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_command_5fprotocal_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Command

// required uint32 cmd = 1;
inline bool Command::has_cmd() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Command::clear_cmd() {
  _impl_.cmd_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t Command::cmd() const {
  // @@protoc_insertion_point(field_get:command.Command.cmd)
  return _internal_cmd();
}
inline void Command::set_cmd(::uint32_t value) {
  _internal_set_cmd(value);
  // @@protoc_insertion_point(field_set:command.Command.cmd)
}
inline ::uint32_t Command::_internal_cmd() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.cmd_;
}
inline void Command::_internal_set_cmd(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.cmd_ = value;
}

// required .command.Device src = 2;
inline bool Command::has_src() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Command::clear_src() {
  _impl_.src_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::command::Device Command::src() const {
  // @@protoc_insertion_point(field_get:command.Command.src)
  return _internal_src();
}
inline void Command::set_src(::command::Device value) {
  _internal_set_src(value);
  // @@protoc_insertion_point(field_set:command.Command.src)
}
inline ::command::Device Command::_internal_src() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::command::Device>(_impl_.src_);
}
inline void Command::_internal_set_src(::command::Device value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  assert(::command::Device_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.src_ = value;
}

// required .command.Device dst = 3;
inline bool Command::has_dst() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Command::clear_dst() {
  _impl_.dst_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::command::Device Command::dst() const {
  // @@protoc_insertion_point(field_get:command.Command.dst)
  return _internal_dst();
}
inline void Command::set_dst(::command::Device value) {
  _internal_set_dst(value);
  // @@protoc_insertion_point(field_set:command.Command.dst)
}
inline ::command::Device Command::_internal_dst() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::command::Device>(_impl_.dst_);
}
inline void Command::_internal_set_dst(::command::Device value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  assert(::command::Device_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.dst_ = value;
}

// required uint32 dtt = 4;
inline bool Command::has_dtt() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Command::clear_dtt() {
  _impl_.dtt_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint32_t Command::dtt() const {
  // @@protoc_insertion_point(field_get:command.Command.dtt)
  return _internal_dtt();
}
inline void Command::set_dtt(::uint32_t value) {
  _internal_set_dtt(value);
  // @@protoc_insertion_point(field_set:command.Command.dtt)
}
inline ::uint32_t Command::_internal_dtt() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.dtt_;
}
inline void Command::_internal_set_dtt(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.dtt_ = value;
}

// required uint32 sig = 5;
inline bool Command::has_sig() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void Command::clear_sig() {
  _impl_.sig_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::uint32_t Command::sig() const {
  // @@protoc_insertion_point(field_get:command.Command.sig)
  return _internal_sig();
}
inline void Command::set_sig(::uint32_t value) {
  _internal_set_sig(value);
  // @@protoc_insertion_point(field_set:command.Command.sig)
}
inline ::uint32_t Command::_internal_sig() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.sig_;
}
inline void Command::_internal_set_sig(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.sig_ = value;
}

// string string_d = 6;
inline bool Command::has_string_d() const {
  return data_case() == kStringD;
}
inline void Command::set_has_string_d() {
  _impl_._oneof_case_[0] = kStringD;
}
inline void Command::clear_string_d() {
  if (data_case() == kStringD) {
    _impl_.data_.string_d_.Destroy();
    clear_has_data();
  }
}
inline const std::string& Command::string_d() const {
  // @@protoc_insertion_point(field_get:command.Command.string_d)
  return _internal_string_d();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Command::set_string_d(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (data_case() != kStringD) {
    clear_data();

    set_has_string_d();
    _impl_.data_.string_d_.InitDefault();
  }
  _impl_.data_.string_d_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:command.Command.string_d)
}
inline std::string* Command::mutable_string_d() {
  std::string* _s = _internal_mutable_string_d();
  // @@protoc_insertion_point(field_mutable:command.Command.string_d)
  return _s;
}
inline const std::string& Command::_internal_string_d() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  if (data_case() != kStringD) {
    return ::google::protobuf::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.data_.string_d_.Get();
}
inline void Command::_internal_set_string_d(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (data_case() != kStringD) {
    clear_data();

    set_has_string_d();
    _impl_.data_.string_d_.InitDefault();
  }
  _impl_.data_.string_d_.Set(value, GetArenaForAllocation());
}
inline std::string* Command::_internal_mutable_string_d() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (data_case() != kStringD) {
    clear_data();

    set_has_string_d();
    _impl_.data_.string_d_.InitDefault();
  }
  return _impl_.data_.string_d_.Mutable( GetArenaForAllocation());
}
inline std::string* Command::release_string_d() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:command.Command.string_d)
  if (data_case() != kStringD) {
    return nullptr;
  }
  clear_has_data();
  return _impl_.data_.string_d_.Release();
}
inline void Command::set_allocated_string_d(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (has_data()) {
    clear_data();
  }
  if (value != nullptr) {
    set_has_string_d();
    _impl_.data_.string_d_.InitAllocated(value, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:command.Command.string_d)
}

// bytes bytes_d = 7;
inline bool Command::has_bytes_d() const {
  return data_case() == kBytesD;
}
inline void Command::set_has_bytes_d() {
  _impl_._oneof_case_[0] = kBytesD;
}
inline void Command::clear_bytes_d() {
  if (data_case() == kBytesD) {
    _impl_.data_.bytes_d_.Destroy();
    clear_has_data();
  }
}
inline const std::string& Command::bytes_d() const {
  // @@protoc_insertion_point(field_get:command.Command.bytes_d)
  return _internal_bytes_d();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Command::set_bytes_d(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (data_case() != kBytesD) {
    clear_data();

    set_has_bytes_d();
    _impl_.data_.bytes_d_.InitDefault();
  }
  _impl_.data_.bytes_d_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:command.Command.bytes_d)
}
inline std::string* Command::mutable_bytes_d() {
  std::string* _s = _internal_mutable_bytes_d();
  // @@protoc_insertion_point(field_mutable:command.Command.bytes_d)
  return _s;
}
inline const std::string& Command::_internal_bytes_d() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  if (data_case() != kBytesD) {
    return ::google::protobuf::internal::GetEmptyStringAlreadyInited();
  }
  return _impl_.data_.bytes_d_.Get();
}
inline void Command::_internal_set_bytes_d(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (data_case() != kBytesD) {
    clear_data();

    set_has_bytes_d();
    _impl_.data_.bytes_d_.InitDefault();
  }
  _impl_.data_.bytes_d_.Set(value, GetArenaForAllocation());
}
inline std::string* Command::_internal_mutable_bytes_d() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (data_case() != kBytesD) {
    clear_data();

    set_has_bytes_d();
    _impl_.data_.bytes_d_.InitDefault();
  }
  return _impl_.data_.bytes_d_.Mutable( GetArenaForAllocation());
}
inline std::string* Command::release_bytes_d() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:command.Command.bytes_d)
  if (data_case() != kBytesD) {
    return nullptr;
  }
  clear_has_data();
  return _impl_.data_.bytes_d_.Release();
}
inline void Command::set_allocated_bytes_d(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (has_data()) {
    clear_data();
  }
  if (value != nullptr) {
    set_has_bytes_d();
    _impl_.data_.bytes_d_.InitAllocated(value, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:command.Command.bytes_d)
}

// int64 int_d = 8;
inline bool Command::has_int_d() const {
  return data_case() == kIntD;
}
inline void Command::set_has_int_d() {
  _impl_._oneof_case_[0] = kIntD;
}
inline void Command::clear_int_d() {
  if (data_case() == kIntD) {
    _impl_.data_.int_d_ = ::int64_t{0};
    clear_has_data();
  }
}
inline ::int64_t Command::int_d() const {
  // @@protoc_insertion_point(field_get:command.Command.int_d)
  return _internal_int_d();
}
inline void Command::set_int_d(::int64_t value) {
  _internal_set_int_d(value);
  // @@protoc_insertion_point(field_set:command.Command.int_d)
}
inline ::int64_t Command::_internal_int_d() const {
  if (data_case() == kIntD) {
    return _impl_.data_.int_d_;
  }
  return ::int64_t{0};
}
inline void Command::_internal_set_int_d(::int64_t value) {
  if (data_case() != kIntD) {
    clear_data();
    set_has_int_d();
  }
  _impl_.data_.int_d_ = value;
}

// double double_d = 9;
inline bool Command::has_double_d() const {
  return data_case() == kDoubleD;
}
inline void Command::set_has_double_d() {
  _impl_._oneof_case_[0] = kDoubleD;
}
inline void Command::clear_double_d() {
  if (data_case() == kDoubleD) {
    _impl_.data_.double_d_ = 0;
    clear_has_data();
  }
}
inline double Command::double_d() const {
  // @@protoc_insertion_point(field_get:command.Command.double_d)
  return _internal_double_d();
}
inline void Command::set_double_d(double value) {
  _internal_set_double_d(value);
  // @@protoc_insertion_point(field_set:command.Command.double_d)
}
inline double Command::_internal_double_d() const {
  if (data_case() == kDoubleD) {
    return _impl_.data_.double_d_;
  }
  return 0;
}
inline void Command::_internal_set_double_d(double value) {
  if (data_case() != kDoubleD) {
    clear_data();
    set_has_double_d();
  }
  _impl_.data_.double_d_ = value;
}

inline bool Command::has_data() const {
  return data_case() != DATA_NOT_SET;
}
inline void Command::clear_has_data() {
  _impl_._oneof_case_[0] = DATA_NOT_SET;
}
inline Command::DataCase Command::data_case() const {
  return Command::DataCase(_impl_._oneof_case_[0]);
}
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace command


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::command::Device> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::command::Device>() {
  return ::command::Device_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_command_5fprotocal_2eproto_2epb_2eh
