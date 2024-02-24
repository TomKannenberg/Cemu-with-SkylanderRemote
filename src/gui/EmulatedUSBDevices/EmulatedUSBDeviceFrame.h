#pragma once

#include <array>

#include <wx/frame.h>

#include "..\Cafe\OS\libs\nsyshid\sky_slots.h"

class wxCheckBox;
class wxFlexGridSizer;
class wxNotebook;
class wxPanel;
class wxStaticBox;
class wxTextCtrl;

class EmulatedUSBDeviceFrame : public wxFrame {

public:
  EmulatedUSBDeviceFrame(wxWindow* parent);
  ~EmulatedUSBDeviceFrame();

private:
  wxCheckBox* m_emulate_portal;
  std::array<wxTextCtrl*, 16> m_skylander_slots;
  

  wxPanel* AddSkylanderPage(wxNotebook* notebook);
  wxFlexGridSizer* AddSkylanderRow(uint8 row_number, wxStaticBox* box);
  void LoadSkylander(uint8 slot);
  void CreateSkylander(uint8 slot);
  void ClearSkylander(uint8 slot);
  void UpdateSkylanderEdits();
};