#pragma once

#include "VolumeJunction1PhaseUserObject.h"

/**
 * Computes and caches flux and residual vectors for a 1-phase pump
 *
 * This class computes and caches the following quantities:
 * \li residuals for the scalar variables associated with the pump, and
 * \li fluxes between the flow channels and the pump.
 */
class Pump1PhaseUserObject : public VolumeJunction1PhaseUserObject
{
public:
  Pump1PhaseUserObject(const InputParameters & params);

protected:
  virtual void computeFluxesAndResiduals(const unsigned int & c) override;

  /// Pump head, [m]
  const Real & _head;
  /// Gravity constant, i.e., 9.8 [m/s^2]
  const Real & _g;

public:
  static InputParameters validParams();
};