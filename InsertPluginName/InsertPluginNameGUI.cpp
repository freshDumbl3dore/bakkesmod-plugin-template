#include "pch.h"
#include "InsertPluginName.h"

/* Plugin Settings Window code here
std::string InsertPluginName::GetPluginName() {
	return "InsertPluginName";
}

void KakkesPlugin::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> KakkesPlugin
void KakkesPlugin::RenderSettings() {
	ImGui::TextUnformatted("KakkesPlugin plugin settings");
}
*/

/*
// Do ImGui rendering here
void InsertPluginName::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string InsertPluginName::GetMenuName()
{
	return "InsertPluginName";
}

// Title to give the menu
std::string InsertPluginName::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void InsertPluginName::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool InsertPluginName::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool InsertPluginName::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void InsertPluginName::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void KakkesPInsertPluginNamelugin::OnClose()
{
	isWindowOpen_ = false;
}
*/
