// Copyright Vincent Favata


#include "UI/Widgets/MyUserWidget.h"

void UMyUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
