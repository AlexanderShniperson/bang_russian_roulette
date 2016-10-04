// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRequestRoomInfo.proto

package ProtoMessages;

public final class MessageRequestRoomInfoBase {
  private MessageRequestRoomInfoBase() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface MessageRequestRoomInfoOrBuilder extends
      // @@protoc_insertion_point(interface_extends:MessageRequestRoomInfo)
      com.google.protobuf.MessageLiteOrBuilder {

    /**
     * <code>required int64 roomId = 1 [default = 0];</code>
     */
    boolean hasRoomId();
    /**
     * <code>required int64 roomId = 1 [default = 0];</code>
     */
    long getRoomId();
  }
  /**
   * Protobuf type {@code MessageRequestRoomInfo}
   */
  public  static final class MessageRequestRoomInfo extends
      com.google.protobuf.GeneratedMessageLite<
          MessageRequestRoomInfo, MessageRequestRoomInfo.Builder> implements
      // @@protoc_insertion_point(message_implements:MessageRequestRoomInfo)
      MessageRequestRoomInfoOrBuilder {
    private MessageRequestRoomInfo() {
    }
    private int bitField0_;
    public static final int ROOMID_FIELD_NUMBER = 1;
    private long roomId_;
    /**
     * <code>required int64 roomId = 1 [default = 0];</code>
     */
    public boolean hasRoomId() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required int64 roomId = 1 [default = 0];</code>
     */
    public long getRoomId() {
      return roomId_;
    }
    /**
     * <code>required int64 roomId = 1 [default = 0];</code>
     */
    private void setRoomId(long value) {
      bitField0_ |= 0x00000001;
      roomId_ = value;
    }
    /**
     * <code>required int64 roomId = 1 [default = 0];</code>
     */
    private void clearRoomId() {
      bitField0_ = (bitField0_ & ~0x00000001);
      roomId_ = 0L;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeInt64(1, roomId_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, roomId_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSerializedSize = size;
      return size;
    }

    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input, extensionRegistry);
    }
    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return parseDelimitedFrom(DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
    }
    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input, extensionRegistry);
    }

    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }

    /**
     * Protobuf type {@code MessageRequestRoomInfo}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo, Builder> implements
        // @@protoc_insertion_point(builder_implements:MessageRequestRoomInfo)
        ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfoOrBuilder {
      // Construct using ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo.newBuilder()
      private Builder() {
        super(DEFAULT_INSTANCE);
      }


      /**
       * <code>required int64 roomId = 1 [default = 0];</code>
       */
      public boolean hasRoomId() {
        return instance.hasRoomId();
      }
      /**
       * <code>required int64 roomId = 1 [default = 0];</code>
       */
      public long getRoomId() {
        return instance.getRoomId();
      }
      /**
       * <code>required int64 roomId = 1 [default = 0];</code>
       */
      public Builder setRoomId(long value) {
        copyOnWrite();
        instance.setRoomId(value);
        return this;
      }
      /**
       * <code>required int64 roomId = 1 [default = 0];</code>
       */
      public Builder clearRoomId() {
        copyOnWrite();
        instance.clearRoomId();
        return this;
      }

      // @@protoc_insertion_point(builder_scope:MessageRequestRoomInfo)
    }
    private byte memoizedIsInitialized = -1;
    protected final Object dynamicMethod(
        com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
        Object arg0, Object arg1) {
      switch (method) {
        case NEW_MUTABLE_INSTANCE: {
          return new ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo();
        }
        case IS_INITIALIZED: {
          byte isInitialized = memoizedIsInitialized;
          if (isInitialized == 1) return DEFAULT_INSTANCE;
          if (isInitialized == 0) return null;

          boolean shouldMemoize = ((Boolean) arg0).booleanValue();
          if (!hasRoomId()) {
            if (shouldMemoize) {
              memoizedIsInitialized = 0;
            }
            return null;
          }
          if (shouldMemoize) memoizedIsInitialized = 1;
          return DEFAULT_INSTANCE;

        }
        case MAKE_IMMUTABLE: {
          return null;
        }
        case NEW_BUILDER: {
          return new Builder();
        }
        case VISIT: {
          Visitor visitor = (Visitor) arg0;
          ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo other = (ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo) arg1;
          roomId_ = visitor.visitLong(
              hasRoomId(), roomId_,
              other.hasRoomId(), other.roomId_);
          if (visitor == com.google.protobuf.GeneratedMessageLite.MergeFromVisitor
              .INSTANCE) {
            bitField0_ |= other.bitField0_;
          }
          return this;
        }
        case MERGE_FROM_STREAM: {
          com.google.protobuf.CodedInputStream input =
              (com.google.protobuf.CodedInputStream) arg0;
          com.google.protobuf.ExtensionRegistryLite extensionRegistry =
              (com.google.protobuf.ExtensionRegistryLite) arg1;
          try {
            boolean done = false;
            while (!done) {
              int tag = input.readTag();
              switch (tag) {
                case 0:
                  done = true;
                  break;
                default: {
                  if (!parseUnknownField(tag, input)) {
                    done = true;
                  }
                  break;
                }
                case 8: {
                  bitField0_ |= 0x00000001;
                  roomId_ = input.readInt64();
                  break;
                }
              }
            }
          } catch (com.google.protobuf.InvalidProtocolBufferException e) {
            throw new RuntimeException(e.setUnfinishedMessage(this));
          } catch (java.io.IOException e) {
            throw new RuntimeException(
                new com.google.protobuf.InvalidProtocolBufferException(
                    e.getMessage()).setUnfinishedMessage(this));
          } finally {
          }
        }
        case GET_DEFAULT_INSTANCE: {
          return DEFAULT_INSTANCE;
        }
        case GET_PARSER: {
          if (PARSER == null) {    synchronized (ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo.class) {
              if (PARSER == null) {
                PARSER = new DefaultInstanceBasedParser(DEFAULT_INSTANCE);
              }
            }
          }
          return PARSER;
        }
      }
      throw new UnsupportedOperationException();
    }


    // @@protoc_insertion_point(class_scope:MessageRequestRoomInfo)
    private static final ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new MessageRequestRoomInfo();
      DEFAULT_INSTANCE.makeImmutable();
    }

    public static ProtoMessages.MessageRequestRoomInfoBase.MessageRequestRoomInfo getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static volatile com.google.protobuf.Parser<MessageRequestRoomInfo> PARSER;

    public static com.google.protobuf.Parser<MessageRequestRoomInfo> parser() {
      return DEFAULT_INSTANCE.getParserForType();
    }
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
