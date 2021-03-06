// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: notes.proto

#ifndef PROTOBUF_notes_2eproto__INCLUDED
#define PROTOBUF_notes_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace protocol {
class Envelope;
class EnvelopeDefaultTypeInternal;
extern EnvelopeDefaultTypeInternal _Envelope_default_instance_;
class Note;
class NoteDefaultTypeInternal;
extern NoteDefaultTypeInternal _Note_default_instance_;
}  // namespace protocol

namespace protocol {

namespace protobuf_notes_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_notes_2eproto

enum Envelope_Type {
  Envelope_Type_GET_ALL_NOTES = 0,
  Envelope_Type_SAVE_NOTE = 1,
  Envelope_Type_DELETE_NOTE = 2,
  Envelope_Type_Envelope_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Envelope_Type_Envelope_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Envelope_Type_IsValid(int value);
const Envelope_Type Envelope_Type_Type_MIN = Envelope_Type_GET_ALL_NOTES;
const Envelope_Type Envelope_Type_Type_MAX = Envelope_Type_DELETE_NOTE;
const int Envelope_Type_Type_ARRAYSIZE = Envelope_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Envelope_Type_descriptor();
inline const ::std::string& Envelope_Type_Name(Envelope_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Envelope_Type_descriptor(), value);
}
inline bool Envelope_Type_Parse(
    const ::std::string& name, Envelope_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Envelope_Type>(
    Envelope_Type_descriptor(), name, value);
}
enum NoteType {
  BASIC = 0,
  REMINDER = 1,
  SCRATCH = 2,
  NoteType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  NoteType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool NoteType_IsValid(int value);
const NoteType NoteType_MIN = BASIC;
const NoteType NoteType_MAX = SCRATCH;
const int NoteType_ARRAYSIZE = NoteType_MAX + 1;

const ::google::protobuf::EnumDescriptor* NoteType_descriptor();
inline const ::std::string& NoteType_Name(NoteType value) {
  return ::google::protobuf::internal::NameOfEnum(
    NoteType_descriptor(), value);
}
inline bool NoteType_Parse(
    const ::std::string& name, NoteType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NoteType>(
    NoteType_descriptor(), name, value);
}
// ===================================================================

class Envelope : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.Envelope) */ {
 public:
  Envelope();
  virtual ~Envelope();

  Envelope(const Envelope& from);

  inline Envelope& operator=(const Envelope& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Envelope& default_instance();

  static inline const Envelope* internal_default_instance() {
    return reinterpret_cast<const Envelope*>(
               &_Envelope_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Envelope* other);

  // implements Message ----------------------------------------------

  inline Envelope* New() const PROTOBUF_FINAL { return New(NULL); }

  Envelope* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Envelope& from);
  void MergeFrom(const Envelope& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Envelope* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Envelope_Type Type;
  static const Type GET_ALL_NOTES =
    Envelope_Type_GET_ALL_NOTES;
  static const Type SAVE_NOTE =
    Envelope_Type_SAVE_NOTE;
  static const Type DELETE_NOTE =
    Envelope_Type_DELETE_NOTE;
  static inline bool Type_IsValid(int value) {
    return Envelope_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Envelope_Type_Type_MIN;
  static const Type Type_MAX =
    Envelope_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Envelope_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Envelope_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Envelope_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Envelope_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .protocol.Note note = 4;
  int note_size() const;
  void clear_note();
  static const int kNoteFieldNumber = 4;
  const ::protocol::Note& note(int index) const;
  ::protocol::Note* mutable_note(int index);
  ::protocol::Note* add_note();
  ::google::protobuf::RepeatedPtrField< ::protocol::Note >*
      mutable_note();
  const ::google::protobuf::RepeatedPtrField< ::protocol::Note >&
      note() const;

  // int64 arrivalTime = 2;
  void clear_arrivaltime();
  static const int kArrivalTimeFieldNumber = 2;
  ::google::protobuf::int64 arrivaltime() const;
  void set_arrivaltime(::google::protobuf::int64 value);

  // int64 id = 3;
  void clear_id();
  static const int kIdFieldNumber = 3;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // .protocol.Envelope.Type type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::protocol::Envelope_Type type() const;
  void set_type(::protocol::Envelope_Type value);

  // @@protoc_insertion_point(class_scope:protocol.Envelope)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::protocol::Note > note_;
  ::google::protobuf::int64 arrivaltime_;
  ::google::protobuf::int64 id_;
  int type_;
  mutable int _cached_size_;
  friend struct protobuf_notes_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Note : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.Note) */ {
 public:
  Note();
  virtual ~Note();

  Note(const Note& from);

  inline Note& operator=(const Note& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Note& default_instance();

  static inline const Note* internal_default_instance() {
    return reinterpret_cast<const Note*>(
               &_Note_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Note* other);

  // implements Message ----------------------------------------------

  inline Note* New() const PROTOBUF_FINAL { return New(NULL); }

  Note* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Note& from);
  void MergeFrom(const Note& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Note* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string content = 5;
  void clear_content();
  static const int kContentFieldNumber = 5;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // int64 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // int64 creationDate = 3;
  void clear_creationdate();
  static const int kCreationDateFieldNumber = 3;
  ::google::protobuf::int64 creationdate() const;
  void set_creationdate(::google::protobuf::int64 value);

  // .protocol.NoteType type = 4;
  void clear_type();
  static const int kTypeFieldNumber = 4;
  ::protocol::NoteType type() const;
  void set_type(::protocol::NoteType value);

  // @@protoc_insertion_point(class_scope:protocol.Note)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::int64 id_;
  ::google::protobuf::int64 creationdate_;
  int type_;
  mutable int _cached_size_;
  friend struct protobuf_notes_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Envelope

// .protocol.Envelope.Type type = 1;
inline void Envelope::clear_type() {
  type_ = 0;
}
inline ::protocol::Envelope_Type Envelope::type() const {
  // @@protoc_insertion_point(field_get:protocol.Envelope.type)
  return static_cast< ::protocol::Envelope_Type >(type_);
}
inline void Envelope::set_type(::protocol::Envelope_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.Envelope.type)
}

// int64 arrivalTime = 2;
inline void Envelope::clear_arrivaltime() {
  arrivaltime_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Envelope::arrivaltime() const {
  // @@protoc_insertion_point(field_get:protocol.Envelope.arrivalTime)
  return arrivaltime_;
}
inline void Envelope::set_arrivaltime(::google::protobuf::int64 value) {
  
  arrivaltime_ = value;
  // @@protoc_insertion_point(field_set:protocol.Envelope.arrivalTime)
}

// int64 id = 3;
inline void Envelope::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Envelope::id() const {
  // @@protoc_insertion_point(field_get:protocol.Envelope.id)
  return id_;
}
inline void Envelope::set_id(::google::protobuf::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:protocol.Envelope.id)
}

// repeated .protocol.Note note = 4;
inline int Envelope::note_size() const {
  return note_.size();
}
inline void Envelope::clear_note() {
  note_.Clear();
}
inline const ::protocol::Note& Envelope::note(int index) const {
  // @@protoc_insertion_point(field_get:protocol.Envelope.note)
  return note_.Get(index);
}
inline ::protocol::Note* Envelope::mutable_note(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.Envelope.note)
  return note_.Mutable(index);
}
inline ::protocol::Note* Envelope::add_note() {
  // @@protoc_insertion_point(field_add:protocol.Envelope.note)
  return note_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::protocol::Note >*
Envelope::mutable_note() {
  // @@protoc_insertion_point(field_mutable_list:protocol.Envelope.note)
  return &note_;
}
inline const ::google::protobuf::RepeatedPtrField< ::protocol::Note >&
Envelope::note() const {
  // @@protoc_insertion_point(field_list:protocol.Envelope.note)
  return note_;
}

// -------------------------------------------------------------------

// Note

// int64 id = 1;
inline void Note::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Note::id() const {
  // @@protoc_insertion_point(field_get:protocol.Note.id)
  return id_;
}
inline void Note::set_id(::google::protobuf::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:protocol.Note.id)
}

// string name = 2;
inline void Note::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Note::name() const {
  // @@protoc_insertion_point(field_get:protocol.Note.name)
  return name_.GetNoArena();
}
inline void Note::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Note.name)
}
#if LANG_CXX11
inline void Note::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protocol.Note.name)
}
#endif
inline void Note::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Note.name)
}
inline void Note::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Note.name)
}
inline ::std::string* Note::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Note.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Note::release_name() {
  // @@protoc_insertion_point(field_release:protocol.Note.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Note::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:protocol.Note.name)
}

// int64 creationDate = 3;
inline void Note::clear_creationdate() {
  creationdate_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Note::creationdate() const {
  // @@protoc_insertion_point(field_get:protocol.Note.creationDate)
  return creationdate_;
}
inline void Note::set_creationdate(::google::protobuf::int64 value) {
  
  creationdate_ = value;
  // @@protoc_insertion_point(field_set:protocol.Note.creationDate)
}

// string content = 5;
inline void Note::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Note::content() const {
  // @@protoc_insertion_point(field_get:protocol.Note.content)
  return content_.GetNoArena();
}
inline void Note::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Note.content)
}
#if LANG_CXX11
inline void Note::set_content(::std::string&& value) {
  
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protocol.Note.content)
}
#endif
inline void Note::set_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Note.content)
}
inline void Note::set_content(const char* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Note.content)
}
inline ::std::string* Note::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Note.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Note::release_content() {
  // @@protoc_insertion_point(field_release:protocol.Note.content)
  
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Note::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:protocol.Note.content)
}

// .protocol.NoteType type = 4;
inline void Note::clear_type() {
  type_ = 0;
}
inline ::protocol::NoteType Note::type() const {
  // @@protoc_insertion_point(field_get:protocol.Note.type)
  return static_cast< ::protocol::NoteType >(type_);
}
inline void Note::set_type(::protocol::NoteType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.Note.type)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace protocol

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::protocol::Envelope_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protocol::Envelope_Type>() {
  return ::protocol::Envelope_Type_descriptor();
}
template <> struct is_proto_enum< ::protocol::NoteType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protocol::NoteType>() {
  return ::protocol::NoteType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_notes_2eproto__INCLUDED
