#ifndef VPP_FILL_HH__
# define VPP_FILL_HH__

# include <vpp/core/boxNd.hh>
# include <vpp/core/vector.hh>
# include <vpp/core/parallel_for.hh>

namespace vpp
{

  template <typename V, unsigned N>
  void fill(imageNd<V, N>& img, V value)
  {
    pixel_wise(img) << [=] (auto& pix) { pix = value; };
  }

};

#endif