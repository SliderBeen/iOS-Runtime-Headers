/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */



@interface CKLoopbackMessage : CKMessage 
{
    BOOL _isOutgoing;
    BOOL _isRead;
    BOOL _isPlaceholder;
}


- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithConversation:(id)arg1 text:(id)arg2 date:(id)arg3;
- (id)initWithConversation:(id)arg1 text:(id)arg2;
- (id)initPlaceholderConversation:(id)arg1 date:(id)arg2;
- (void)setOutgoing:(BOOL)arg1;
- (void)markAsSent;
- (void)markAsRead;
- (NSInteger)sentCount;
- (BOOL)hasBeenRead;
- (BOOL)isOutgoing;

@end