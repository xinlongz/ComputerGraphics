/**
 * @file model.hpp
 * @brief Model class
 *
 * @author Eric Butler (edbutler)
 */

#ifndef _462_SCENE_MODEL_HPP_
#define _462_SCENE_MODEL_HPP_

#include "scene/scene.hpp"
#include "scene/mesh.hpp"

namespace _462 {

/**
 * A mesh of triangles.
 */
class Model : public Geometry
{
public:

    const Mesh* mesh;
    const Material* material;

    Model();
    virtual ~Model();

    virtual void render() const;
	virtual void bounding_box();
	virtual bool intersectTest(Ray ray, real_t t0, real_t t1, HitRecord* hitRecord); 
};


} /* _462 */

#endif /* _462_SCENE_MODEL_HPP_ */

