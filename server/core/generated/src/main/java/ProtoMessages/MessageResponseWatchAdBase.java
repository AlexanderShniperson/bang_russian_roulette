// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponseWatchAd.proto

package ProtoMessages;

public final class MessageResponseWatchAdBase {
  private MessageResponseWatchAdBase() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }
  public interface MessageResponseWatchAdOrBuilder extends
      // @@protoc_insertion_point(interface_extends:MessageResponseWatchAd)
      com.google.protobuf.MessageLiteOrBuilder {

    /**
     * <code>required int32 rewardAmount = 1 [default = 0];</code>
     */
    boolean hasRewardAmount();
    /**
     * <code>required int32 rewardAmount = 1 [default = 0];</code>
     */
    int getRewardAmount();
  }
  /**
   * Protobuf type {@code MessageResponseWatchAd}
   */
  public  static final class MessageResponseWatchAd extends
      com.google.protobuf.GeneratedMessageLite<
          MessageResponseWatchAd, MessageResponseWatchAd.Builder> implements
      // @@protoc_insertion_point(message_implements:MessageResponseWatchAd)
      MessageResponseWatchAdOrBuilder {
    private MessageResponseWatchAd() {
    }
    private int bitField0_;
    public static final int REWARDAMOUNT_FIELD_NUMBER = 1;
    private int rewardAmount_;
    /**
     * <code>required int32 rewardAmount = 1 [default = 0];</code>
     */
    public boolean hasRewardAmount() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>required int32 rewardAmount = 1 [default = 0];</code>
     */
    public int getRewardAmount() {
      return rewardAmount_;
    }
    /**
     * <code>required int32 rewardAmount = 1 [default = 0];</code>
     */
    private void setRewardAmount(int value) {
      bitField0_ |= 0x00000001;
      rewardAmount_ = value;
    }
    /**
     * <code>required int32 rewardAmount = 1 [default = 0];</code>
     */
    private void clearRewardAmount() {
      bitField0_ = (bitField0_ & ~0x00000001);
      rewardAmount_ = 0;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeInt32(1, rewardAmount_);
      }
      unknownFields.writeTo(output);
    }

    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(1, rewardAmount_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSerializedSize = size;
      return size;
    }

    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data);
    }
    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, data, extensionRegistry);
    }
    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input, extensionRegistry);
    }
    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return parseDelimitedFrom(DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
    }
    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input);
    }
    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageLite.parseFrom(
          DEFAULT_INSTANCE, input, extensionRegistry);
    }

    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }

    /**
     * Protobuf type {@code MessageResponseWatchAd}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageLite.Builder<
          ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd, Builder> implements
        // @@protoc_insertion_point(builder_implements:MessageResponseWatchAd)
        ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAdOrBuilder {
      // Construct using ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd.newBuilder()
      private Builder() {
        super(DEFAULT_INSTANCE);
      }


      /**
       * <code>required int32 rewardAmount = 1 [default = 0];</code>
       */
      public boolean hasRewardAmount() {
        return instance.hasRewardAmount();
      }
      /**
       * <code>required int32 rewardAmount = 1 [default = 0];</code>
       */
      public int getRewardAmount() {
        return instance.getRewardAmount();
      }
      /**
       * <code>required int32 rewardAmount = 1 [default = 0];</code>
       */
      public Builder setRewardAmount(int value) {
        copyOnWrite();
        instance.setRewardAmount(value);
        return this;
      }
      /**
       * <code>required int32 rewardAmount = 1 [default = 0];</code>
       */
      public Builder clearRewardAmount() {
        copyOnWrite();
        instance.clearRewardAmount();
        return this;
      }

      // @@protoc_insertion_point(builder_scope:MessageResponseWatchAd)
    }
    private byte memoizedIsInitialized = -1;
    protected final Object dynamicMethod(
        com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
        Object arg0, Object arg1) {
      switch (method) {
        case NEW_MUTABLE_INSTANCE: {
          return new ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd();
        }
        case IS_INITIALIZED: {
          byte isInitialized = memoizedIsInitialized;
          if (isInitialized == 1) return DEFAULT_INSTANCE;
          if (isInitialized == 0) return null;

          boolean shouldMemoize = ((Boolean) arg0).booleanValue();
          if (!hasRewardAmount()) {
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
          ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd other = (ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd) arg1;
          rewardAmount_ = visitor.visitInt(
              hasRewardAmount(), rewardAmount_,
              other.hasRewardAmount(), other.rewardAmount_);
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
                  rewardAmount_ = input.readInt32();
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
          if (PARSER == null) {    synchronized (ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd.class) {
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


    // @@protoc_insertion_point(class_scope:MessageResponseWatchAd)
    private static final ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new MessageResponseWatchAd();
      DEFAULT_INSTANCE.makeImmutable();
    }

    public static ProtoMessages.MessageResponseWatchAdBase.MessageResponseWatchAd getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static volatile com.google.protobuf.Parser<MessageResponseWatchAd> PARSER;

    public static com.google.protobuf.Parser<MessageResponseWatchAd> parser() {
      return DEFAULT_INSTANCE.getParserForType();
    }
  }


  static {
  }

  // @@protoc_insertion_point(outer_class_scope)
}
