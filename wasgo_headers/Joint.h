/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "NodePath.h"
#include "Spatial.h"
class Joint : public Spatial{
public: Joint();
bool  get_exclude_nodes_from_collision();
bool  get_exclude_nodes_from_collision();
NodePath  get_node_a();
NodePath  get_node_a();
NodePath  get_node_b();
NodePath  get_node_b();
int  get_solver_priority();
int  get_solver_priority();
void  set_exclude_nodes_from_collision(bool enable);
void  set_node_a(NodePath node);
void  set_node_b(NodePath node);
void  set_solver_priority(int priority);
};