#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WidgetCarousel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK
{

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// 0x0598 (0x05A0 - 0x0008)
struct FWidgetCarouselNavigationButtonStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_2D6A[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           InnerButtonStyle;                                  // 0x0010(0x03F0)(NativeAccessSpecifierPublic)
	struct FSlateBrush                            NavigationButtonLeftImage;                         // 0x0400(0x00D0)(NativeAccessSpecifierPublic)
	struct FSlateBrush                            NavigationButtonRightImage;                        // 0x04D0(0x00D0)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FWidgetCarouselNavigationButtonStyle) == 0x000010, "Wrong alignment on FWidgetCarouselNavigationButtonStyle");
static_assert(sizeof(FWidgetCarouselNavigationButtonStyle) == 0x0005A0, "Wrong size on FWidgetCarouselNavigationButtonStyle");
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, InnerButtonStyle) == 0x000010, "Member 'FWidgetCarouselNavigationButtonStyle::InnerButtonStyle' has a wrong offset!");
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonLeftImage) == 0x000400, "Member 'FWidgetCarouselNavigationButtonStyle::NavigationButtonLeftImage' has a wrong offset!");
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonRightImage) == 0x0004D0, "Member 'FWidgetCarouselNavigationButtonStyle::NavigationButtonRightImage' has a wrong offset!");

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// 0x0CA8 (0x0CB0 - 0x0008)
struct FWidgetCarouselNavigationBarStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_2D6B[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            HighlightBrush;                                    // 0x0010(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                           LeftButtonStyle;                                   // 0x00E0(0x03F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                           CenterButtonStyle;                                 // 0x04D0(0x03F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                           RightButtonStyle;                                  // 0x08C0(0x03F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWidgetCarouselNavigationBarStyle) == 0x000010, "Wrong alignment on FWidgetCarouselNavigationBarStyle");
static_assert(sizeof(FWidgetCarouselNavigationBarStyle) == 0x000CB0, "Wrong size on FWidgetCarouselNavigationBarStyle");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, HighlightBrush) == 0x000010, "Member 'FWidgetCarouselNavigationBarStyle::HighlightBrush' has a wrong offset!");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, LeftButtonStyle) == 0x0000E0, "Member 'FWidgetCarouselNavigationBarStyle::LeftButtonStyle' has a wrong offset!");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, CenterButtonStyle) == 0x0004D0, "Member 'FWidgetCarouselNavigationBarStyle::CenterButtonStyle' has a wrong offset!");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, RightButtonStyle) == 0x0008C0, "Member 'FWidgetCarouselNavigationBarStyle::RightButtonStyle' has a wrong offset!");

}

