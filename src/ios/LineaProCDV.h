//
//  LineaProCDV.h
//
//  Created by Timofey Tatarinov on 27.01.14.
//  Citronium
//  http://citronium.com
//

#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>

#import "DTDevices.h"

// Definition of scanner tracking events
typedef NS_OPTIONS (int, RFIDType) {
    RFIDTypeNone       = 0,
    RFIDTypeISO14443A  = CARD_SUPPORT_TYPE_A,
    RFIDTypeISO14443B  = CARD_SUPPORT_TYPE_B,
    RFIDTypeFelica     = CARD_SUPPORT_FELICA,
    RFIDTypeNFC        = CARD_SUPPORT_NFC,
    RFIDTypeJEWEL      = CARD_SUPPORT_JEWEL,
    RFIDTypeISO15693   = CARD_SUPPORT_ISO15,
    RFIDTypeSTSRI      = CARD_SUPPORT_STSRI,
    RFIDTypePICO14443A = CARD_SUPPORT_PICOPASS_ISO14,
    RFIDTypePICO15693  = CARD_SUPPORT_PICOPASS_ISO15
};

@interface LineaProCDV : CDVPlugin
{
    DTDevices *dtdev;
}

- (void)initDT:(CDVInvokedUrlCommand*)command;
- (void)getConnectionStatus:(CDVInvokedUrlCommand*)command;
- (void)startBarcode:(CDVInvokedUrlCommand*)command;
- (void)stopBarcode:(CDVInvokedUrlCommand*)command;
- (void)startRFID:(CDVInvokedUrlCommand *)command;
- (void)stopRFID:(CDVInvokedUrlCommand *)command;

@end
