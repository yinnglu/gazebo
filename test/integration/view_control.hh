/*
 * Copyright (C) 2016 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef GAZEBO_TEST_INTEGRATION_VIEWCONTROLTEST_HH
#define GAZEBO_TEST_INTEGRATION_VIEWCONTROLTEST_HH

#include "gazebo/gui/QTestFixture.hh"

/// \brief A test class for the view controller
class ViewControlTest : public QTestFixture
{
  Q_OBJECT

  /// \brief Test zooming in on a model in simulation
  private slots: void MouseZoomSimulation();

  /// \brief Test zooming in on a model in model editor
  private slots: void MouseZoomModelEditor();

  /// \brief Test zooming in on a model behind the terrain
  private slots: void MouseZoomTerrain();
};

#endif
