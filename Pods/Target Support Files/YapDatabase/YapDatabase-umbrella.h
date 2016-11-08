#ifdef __OBJC__
#import <UIKit/UIKit.h>
#endif

#import "YapDatabase.h"
#import "YapDatabaseConnection.h"
#import "YapDatabaseOptions.h"
#import "YapDatabaseTransaction.h"
#import "YapBidirectionalCache.h"
#import "YapCache.h"
#import "YapCollectionKey.h"
#import "YapDatabaseQuery.h"
#import "YapMurmurHash.h"
#import "YapMutationStack.h"
#import "YapProxyObject.h"
#import "YapSet.h"
#import "YapWhitelistBlacklist.h"
#import "YapDatabaseExtension.h"
#import "YapDatabaseExtensionConnection.h"
#import "YapDatabaseExtensionTransaction.h"
#import "YapDatabaseExtensionTypes.h"
#import "YapActionable.h"
#import "YapActionItem.h"
#import "YapDatabaseActionManager.h"
#import "YapDatabaseActionManagerConnection.h"
#import "YapDatabaseActionManagerTransaction.h"
#import "YDBCKChangeSet.h"
#import "YDBCKMergeInfo.h"
#import "YDBCKRecord.h"
#import "YDBCKRecordInfo.h"
#import "YapDatabaseCloudKit.h"
#import "YapDatabaseCloudKitConnection.h"
#import "YapDatabaseCloudKitOptions.h"
#import "YapDatabaseCloudKitTransaction.h"
#import "YapDatabaseCloudKitTypes.h"
#import "YapDatabaseConnectionProxy.h"
#import "YapDatabaseCrossProcessNotification.h"
#import "YapDatabaseCrossProcessNotificationConnection.h"
#import "YapDatabaseCrossProcessNotificationTransaction.h"
#import "YapDatabaseFilteredView.h"
#import "YapDatabaseFilteredViewConnection.h"
#import "YapDatabaseFilteredViewTransaction.h"
#import "YapDatabaseFilteredViewTypes.h"
#import "YapDatabaseFullTextSearch.h"
#import "YapDatabaseFullTextSearchConnection.h"
#import "YapDatabaseFullTextSearchHandler.h"
#import "YapDatabaseFullTextSearchSnippetOptions.h"
#import "YapDatabaseFullTextSearchTransaction.h"
#import "YapDatabaseHooks.h"
#import "YapDatabaseHooksConnection.h"
#import "YapDatabaseHooksTransaction.h"
#import "YapDatabaseRTreeIndex.h"
#import "YapDatabaseRTreeIndexConnection.h"
#import "YapDatabaseRTreeIndexHandler.h"
#import "YapDatabaseRTreeIndexOptions.h"
#import "YapDatabaseRTreeIndexSetup.h"
#import "YapDatabaseRTreeIndexTransaction.h"
#import "YapDatabaseRelationship.h"
#import "YapDatabaseRelationshipConnection.h"
#import "YapDatabaseRelationshipEdge.h"
#import "YapDatabaseRelationshipNode.h"
#import "YapDatabaseRelationshipOptions.h"
#import "YapDatabaseRelationshipTransaction.h"
#import "YapDatabaseSearchQueue.h"
#import "YapDatabaseSearchResultsView.h"
#import "YapDatabaseSearchResultsViewConnection.h"
#import "YapDatabaseSearchResultsViewOptions.h"
#import "YapDatabaseSearchResultsViewTransaction.h"
#import "YapDatabaseSecondaryIndex.h"
#import "YapDatabaseSecondaryIndexConnection.h"
#import "YapDatabaseSecondaryIndexHandler.h"
#import "YapDatabaseSecondaryIndexOptions.h"
#import "YapDatabaseSecondaryIndexSetup.h"
#import "YapDatabaseSecondaryIndexTransaction.h"
#import "YapDatabaseViewChange.h"
#import "YapDatabaseViewMappings.h"
#import "YapDatabaseViewRangeOptions.h"
#import "YapDatabaseView.h"
#import "YapDatabaseViewConnection.h"
#import "YapDatabaseViewOptions.h"
#import "YapDatabaseViewTransaction.h"
#import "YapDatabaseViewTypes.h"

FOUNDATION_EXPORT double YapDatabaseVersionNumber;
FOUNDATION_EXPORT const unsigned char YapDatabaseVersionString[];

